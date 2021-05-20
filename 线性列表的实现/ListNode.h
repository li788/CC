#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef struct li li;
typedef int mytype;
struct li
{
	mytype* a;
	int size;
	int  capicity;
};
void pushback(li* ps, mytype x);//尾插法
void pushfornt(li* ps, mytype x);//头插
void popback(li* ps);//尾删
void popfornt(li* ps);//头删
void Check(li* ps);//检查并扩展内存
void myprintf(li* ps);//打印线性列表.
void inset(li* ps, mytype x, int pos);//任意位置插入一个数据
void randpop(li* ps, int pos);//任意位置删除
int find(li* ps, mytype x);//查找数据是否存在