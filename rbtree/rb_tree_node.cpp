//
// Created by Admin on 2021/6/2.
//

#include "rb_tree_node.h"

template<class T>
RB_Tree_Node<T>::RB_Tree_Node(T data_in):data(data_in), color_tag(0) {
    data = data_in;
    color_tag = 1;
}

template<class T>
RB_Tree_Node<T>::~RB_Tree_Node(void) {}



















