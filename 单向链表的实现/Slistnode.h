#pragma once
#include<stdio.h>
#include<stdlib.h>
#include <assert.h>
typedef int mytype;
//定义一个数据类型
struct Slist 
{
	mytype a;
	struct Slist* next;
};
typedef struct Slist sl;
//扩建一个节点
sl* add(mytype x);
//头插
//传入这个链表的头地址的地址（因为如果链表的头地址可能会改变），为了找到这个链表，第二个为要插入的数据
void pushfront(sl**head, mytype x);
//尾插
void pushback(sl**head, mytype x);
//头删
void popback(sl** head);
void popback2(sl** head);
//查找：链表没有用下标可言的所以我们找到了只返回地址；为任意位置插入和删除提供接口
sl*find(sl* head, mytype x);
//链表的长度
int mysize(sl* head);
//任意位置插入
//pos为要插入的位置，即第几个元素，链表不支持位置查询，故需要将任意位置转换成地址
sl* findpos(sl* head, int pos);
//这个位置有三种情况，
//首位置：头插，末尾：尾插，中间插入，
void insert(sl** head,int pos ,mytype x);
//任意位置删除
void pop(sl** head, int pos);
//打印链表
void myprint(sl* head);
