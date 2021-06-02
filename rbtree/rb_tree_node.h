//
// Created by Admin on 2021/6/2.
//

#ifndef CPPDEMO_RB_TREE_NODE_H
#define CPPDEMO_RB_TREE_NODE_H

template <class T>
class RB_Tree_Node{
public:
    RB_Tree_Node(T data_in);
    ~RB_Tree_Node(void);
    RB_Tree_Node* left_child;
    RB_Tree_Node* right_child;
    RB_Tree_Node* father_node;
    T data;
    int color_tag;
};


#endif //CPPDEMO_RB_TREE_NODE_H
