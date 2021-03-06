// Author: Qin Yuan
// Time:
#pragma once

#define NodePosi(T) ListNode<T>*

template <typename T>
struct ListNode
{
    // 数据成员
    T data;
    ListNode<T> *pred; //定义为指针类型
    ListNode<T> *succ; //定义指针类型

    // 构造、析构函数
    ListNode() {}
    // 用数据项，前后继创建节点
    ListNode(T const &e, NodePosi(T) _p = nullptr, NodePosi(T) _s = nullptr) : data(e), pred(_p), succ(_s) {}
    ~ListNode() {}

    // 成员函数
    NodePosi(T) insertAfter(T const &e)
    {
        NodePosi(T) node = new ListNode<T>(e,this,succ);
        succ->pred = node;
        succ = node;
        return node;
    }

    NodePosi(T) insertBefore(T const &e)
    {
        NodePosi(T) node = new ListNode<T>(e,pred,this);
        pred->succ = node;
        pred = node;
        return node;
    }
};
