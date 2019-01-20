/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

typedef int Rank; //�� typedef ������  ������
#define ListNodePosi(T) ListNode<T>* //�б�ڵ�λ��  #define ����  ��Ҫ��ʾ�Ķ���

// ListNode ��һ�����󣬶����ڲ��������ݳ�Ա��Ҳ������Ա����
// ���ݳ�Ա����������ָ�룬ָ��ǰ��̵ĵ�ַ
// �μ��������ʾ����ָ��


// ��Ҫ����һ���ڵ��ʾ���б��еĽڵ����
template <typename T> 
struct ListNode { //�б�ڵ�ģ���ࣨ��˫��������ʽʵ�֣� 
// ��Ա ˫���б��е�����Ա�һ����ʾ�ڵ㴦�����ݣ�һ������ǰ�棬һ�����Ӻ���
   T data; 
   ListNodePosi(T) pred; 
   ListNodePosi(T) succ; //��ֵ��ǰ�������
// ���캯��
   // Ĭ�Ϲ��캯��
   ListNode() {} //���header��trailer�Ĺ���
   ListNode ( T e, ListNodePosi(T) p = NULL, ListNodePosi(T) s = NULL )
      : data ( e ), pred ( p ), succ ( s ) {} //Ĭ�Ϲ�����  ���������һ���ڵ㣬���԰����ýڵ��ǰ���
// �����ӿ�
   ListNodePosi(T) insertAsPred ( T const& e ); //������ǰ�ڵ�֮ǰ�����½ڵ�
   ListNodePosi(T) insertAsSucc ( T const& e ); //���浱ǰ�ڵ�֮������½ڵ�
};

#include "listNode_implementation.h"