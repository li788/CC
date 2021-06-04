#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int mydate;

struct Stack
{
	int top;//记录数组最后一个位置，数组大小从0开始
	int Capacity;
	mydate* a;
};
typedef struct Stack stack;
//尾做栈顶
void insert(stack* stack1, mydate x);
//出栈
void pop(stack* stack1);
//打印栈
void myprint(stack* stack1);

