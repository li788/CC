#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
struct root
{
	char date;
	struct root* left;
	struct root* right;
};
typedef struct root root;
typedef	root* mydate;
struct queque 
{
	mydate a;
	struct queque* Que;
};
typedef struct queque  queque;

//建立一个新的节点
queque* newque(mydate x);
//入队
void pushback(queque** q1, mydate x);
//出队
void pop(queque** q1);
//打印队列
void myprint(queque* q1);
//判断是否为空
bool isempty(queque*q1);