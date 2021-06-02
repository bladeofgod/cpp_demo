//
// Created by Admin on 2021/6/2.
//

#ifndef RB_TREE_H
#define RB_TREE_H

#include "rb_tree_node.h"
template <class T>
class RB_Tree{
public:
    RB_Tree(T root_data);
    ~RB_Tree();
    void left_rotate(RB_Tree_Node<T> *current_node );
    void right_rotate(RB_Tree_Node<T> *current_node);
    void insert_node(T insert_data);
    int delete_node(T delete_data);
    void fix_tree(RB_Tree_Node<T> *current_node);
    void erase_node(RB_Tree_Node<T> *node_del);
    void fix_tree_delete(RB_Tree_Node<T> *current_node);
    RB_Tree_Node<T>* find_successor_node(RB_Tree_Node<T>* current_node);
    RB_Tree_Node<T>* root_node;
};




#endif //CPPDEMO_RB_TREE_H
