//
// Created by Admin on 2021/6/2.
//

#include <cstring>
#include "rb_tree.h"
template <class T>
RB_Tree<T>::RB_Tree(T root_data) :root_node(NULL){
    if(root_node == NULL){
        root_node = new RB_Tree_Node<T>(root_data);
        root_node->color_tag = 0;
    }
}

template <class T>
RB_Tree<T>::~RB_Tree<T>() {}

/************************************************************************/
/* 函数功能：向红黑树中插入一个节点                                     */
// 入口参数：插入的数据
// 返回值：无
/************************************************************************/

template<class T>
void RB_Tree<T>::insert_node(T insert_data) {
    RB_Tree_Node<T>* temp_node = root_node;
    while(temp_node != NULL){
        //父节点不为空
        if(insert_data > temp_node->data){
            if(temp_node->right_child == NULL) {
                //先插入右节点
                temp_node->right_child = new RB_Tree_Node<T>(insert_data);
                temp_node->right_child->color_tag = 1;
                temp_node->right_child->father_node = temp_node;
                if(temp_node->color_tag == 1) {
                    //确保颜色相异
                    fix_tree(temp_node->right_child);
                }
                break;
            }
            else
            {
                temp_node = temp_node->right_child;
            }
        }
        else
        {
            if(temp_node->left_child != NULL)
            {
                temp_node->left_child = new RB_Tree_Node<T>(insert_data);
                temp_node->left_child->color_tag = 1;
                temp_node->left_child->father_node = temp_node;
                if(temp_node->color_tag == 1)
                {
                    fix_tree(temp_node->left_child);
                }
                break;
            }
            else
            {
                temp_node = temp_node->left_child;
            }
        }
    }
}


/************************************************************************/
/* 函数功能：从红黑树中搜寻要删除的数据节点                             */
// 入口参数：删除的数据
// 返回值：1表示删除成功 -1表示删除失败
/************************************************************************/

template <class T>
int RB_Tree<T>::delete_node(T delete_data) {
    RB_Tree_Node<T>* temp_node = root_node;
    while (temp_node->data != delete_data && temp_node != NULL)
    {
        if(delete_data > temp_node->data)
        {
            temp_node = temp_node->right_child;
        }
        else
        {
            temp_node = temp_node->left_child;
        }
    }

    if(temp_node)
    {
        int color_tag = temp_node->color_tag;
        if(temp_node->left_child == NULL && temp_node->right_child == NULL){
            //左右子树为空
            delete temp_node;
        }
        else if(temp_node->left_child == NULL && temp_node->right_child != NULL) {
            //左子树为空 右子树不为空
            if(temp_node != root_node) {
                //非根节点
                if(temp_node->father_node->left_child == temp_node) {
                    temp_node->father_node->left_child == temp_node->right_child;
                    temp_node->right_child->father_node = temp_node->father_node;
                }
                else
                {
                    temp_node->father_node->right_child = temp_node->right_child;
                    temp_node->right_child->father_node = temp_node->father_node;
                }
            }
            else
            {
                //根节点
                root_node = temp_node->right_child;
                temp_node->right_child->father_node = root_node;
            }
        }
        else if(temp_node->left_child != NULL && temp_node->right_child == NULL)
        {
            //左子树不为空，右树为空
            if(temp_node != root_node)
            {
                //非根节点
                if(temp_node->father_node->left_child == temp_node)
                {
                    temp_node->father_node->left_child = temp_node->left_child;
                    temp_node->left_child->father_node = temp_node->father_node;
                }
                else
                {
                    temp_node->father_node->right_child = temp_node->left_child;
                    temp_node->left_child->father_node = temp_node->father_node;
                }
            }
            else
            {
                //根节点
                root_node = temp_node->left_child;
                temp_node->left_child->father_node = root_node;
            }
        }
        else if(temp_node->left_child != NULL && temp_node->right_child != NULL)
        {
            //左右均不为空
            RB_Tree_Node<T> successor_node = find_successor_node(temp_node);
            if(temp_node == temp_node->father_node->left_child)
            {
                temp_node->father_node->left_child = successor_node;
                successor_node.right_child = temp_node->right_child;
                successor_node.left_child = temp_node->left_child;
                successor_node.father_node = temp_node->father_node;
                successor_node.color_tag = temp_node->color_tag;
                if(successor_node.right_child)
                {
                    successor_node.father_node->left_child = successor_node.right_child;
                    successor_node.right_child->father_node = successor_node.father_node;
                }
            }
            else
            {
                temp_node->father_node->right_child = successor_node;
                successor_node.right_child = temp_node->right_child;
                successor_node.left_child = temp_node->left_child;
                successor_node.father_node = temp_node->father_node;
                successor_node.color_tag = temp_node->color_tag;
                if(successor_node.right_child)
                {
                    successor_node.father_node->left_child = successor_node.right_child;
                    successor_node.right_child->father_node = successor_node.father_node;
                }
            }
        }
        if(color_tag == 0)
        {
            //删除节点为黑色 则调整为红色
            fix_tree_delete((RB_Tree_Node<T>*) temp_node);
        }
    }
    else
    {
        //未发现删除的数据 返回 -1
        return -1;
    }
    return -1;


}

/************************************************************************/
/* 函数功能：插入节点后修整红黑树，保证满足性质                         */
// 入口参数：插入的当前节点
// 返回值：无
/************************************************************************/


template <class T>
void RB_Tree<T>::fix_tree(RB_Tree_Node<T> *current_node) {
    RB_Tree_Node<T>* temp_current_node = current_node;
    RB_Tree_Node<T>* uncle_node;
    while (true){
        if(temp_current_node->father_node == NULL) {
            break;
        }
        if(temp_current_node->father_node->color_tag != 1) {
            break;
        }
        RB_Tree_Node<T>* father_node = temp_current_node->father_node;
        RB_Tree_Node<T>* grandFa_node = father_node->father_node;
        if(grandFa_node) {
            if(father_node == grandFa_node->left_child) {
                uncle_node = grandFa_node->right_child;
                //if have uncle node
                if(uncle_node) {
                    //case 1 uncle is red,turns father and uncle to black color
                    //grand-father set red color, and to current node
                    if(uncle_node->color_tag == 1) {
                        uncle_node->color_tag = 0;
                        father_node->color_tag = 0;
                        grandFa_node->color_tag = 1;
                        temp_current_node = grandFa_node;
                    }
                    //case 2 : uncle is black,and current node is right-node,
                    // then  put father node as current node, left rotate
                    else if(temp_current_node == father_node->right_child) {
                        temp_current_node = temp_current_node->father_node;
                        left_rotate(temp_current_node);
                    }
                    //case 3 : uncle is black,and current node is left-node,
                    // then set father to black,grandFather to red,
                    // before rotated grandFather node to right;
                    else {
                        father_node->color_tag = 0;
                        grandFa_node->color_tag = 1;
                        right_rotate(grandFa_node);
                    }
                }
                //no uncle
                else {
                    if(current_node == father_node->right_child) {
                        temp_current_node = temp_current_node->father_node;
                        left_rotate(temp_current_node);
                    }
                    else
                    {
                        father_node->color_tag = 0;
                        grandFa_node->color_tag = 1;
                        right_rotate(grandFa_node);
                    }
                }
            }
            else
            {
                uncle_node = grandFa_node->left_child;
                if(uncle_node) {
                    //case 1 uncle is red, set father and uncle to black,
                    //grand father's color to red,and as current node;
                    if(uncle_node->color_tag == 1){
                        uncle_node->color_tag = 0;
                        father_node->color_tag = 0;
                        grandFa_node->color_tag = 1;
                        temp_current_node = grandFa_node;
                    }
                    //case 2: uncle is black,and is current node.
                    //set father node as current node and rotated to left
                    else if(temp_current_node == father_node->left_child) {
                        temp_current_node = temp_current_node->father_node;
                        left_rotate(temp_current_node);
                    }
                    //case 3: uncle is black and as child of current-node,
                    // set father's color to black,grand father's color to red,
                    // rotated grand father to right;
                    else
                    {
                        father_node->color_tag = 0;
                        grandFa_node->color_tag = 1;
                        right_rotate(grandFa_node);
                    }
                }
                else
                {
                    if(temp_current_node == father_node->left_child){
                        temp_current_node = temp_current_node->father_node;
                        right_rotate(temp_current_node);
                    }
                    else
                    {
                        father_node->color_tag = 0;
                        grandFa_node->color_tag = 1;
                        left_rotate(grandFa_node);
                    }
                }
            }
        }
    }
    root_node->color_tag = 0;
}

/************************************************************************/
/* 函数功能：对当前节点进行左旋操作                                     */
// 入口参数：左旋的当前节点
// 返回值：无
/************************************************************************/


template <class T>
void RB_Tree<T>::left_rotate(RB_Tree_Node<T> *current_node) {
    RB_Tree_Node<T>* right_node = current_node->right_child;
    RB_Tree_Node<T>* father_node = current_node->father_node;
    current_node->right_child = right_node->left_child;
    right_node->father_node = father_node;
    if(father_node == NULL) {
        root_node = right_node;
    }
    else if(current_node == father_node->left_child) {
        father_node->left_child = right_node;
    }
    else {
        father_node->right_child = right_node;
    }
    right_node->left_child = current_node;
    current_node->father_node = right_node;
}


/************************************************************************/
/* 函数功能：对当前节点进行右旋操作                                     */
// 入口参数：右旋的当前节点
// 返回值：无
/************************************************************************/
template <class T>
void RB_Tree<T>::right_rotate(RB_Tree_Node<T> *current_node) {
    RB_Tree_Node<T>* left_node = current_node->left_child;
    RB_Tree_Node<T>* father_node = current_node->father_node;
    current_node->left_child = left_node->right_child;
    left_node->right_child = current_node;
    if(father_node == NULL) {
        root_node = left_node;
    }
    else if(current_node == father_node->left_child){
        father_node->left_child = left_node;
    }
    else {
        father_node->right_child = left_node;
    }
    current_node->father_node = left_node;
    left_node->father_node = father_node;
}


/************************************************************************/
/* 函数功能：找寻当前节点的中序后继节点                                 */
// 入口参数：当前节点
// 返回值：当前节点的中序后继节点
/************************************************************************/
template <class T>
RB_Tree_Node<T>* RB_Tree<T>::find_successor_node(RB_Tree_Node<T> *current_node) {
    RB_Tree_Node<T> temp_node = current_node->right_child;
    while (temp_node.left_child != NULL) {
        temp_node = temp_node.left_child;
    }
    return temp_node;
}

/************************************************************************/
/* 函数功能：清除该节点相关的所有信息                                   */
// 入口参数：当前节点
// 返回值：无
/************************************************************************/

template <class T>
void RB_Tree<T>::erase_node(RB_Tree_Node<T> *node_del) {
    if(node_del->father_node) {
        node_del->father_node = NULL;
    }
    node_del->color_tag = NULL;
    node_del->father_node = NULL;
    node_del->left_child = NULL;
    node_del->right_child = NULL;
    node_del->data = NULL;
    delete node_del;
}


























