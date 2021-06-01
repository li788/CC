#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int mytype;
typedef struct list list;

//定义一个哨兵位
//双向链表节点的定义
struct list {

	list* prv;
	mytype a;
	list* next;
};
//创建一个节点
list* newlist(mytype x);
//初始化哨兵位
void newhead(list**head);
//头插
void pushfront(list* head, mytype x);
//尾插法
void pushback(list* head, mytype x);
//头删
void popfront(list* head);
//尾删
void popback(list* head);
//查找
list* myfind(list* head, mytype x);
//给定元素的序号，我们要找到他的位置：
list* my_find(list* head, int pos);
//给定位置插入
void insert(list* head, int pos, mytype x);
//删除指定位置
void posdele(list* head, int pos);
//打印双向链表
void myprint(list* head);