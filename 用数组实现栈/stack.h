#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int mydate;

struct Stack
{
	int top;//��¼�������һ��λ�ã������С��0��ʼ
	int Capacity;
	mydate* a;
};
typedef struct Stack stack;
//β��ջ��
void insert(stack* stack1, mydate x);
//��ջ
void pop(stack* stack1);
//��ӡջ
void myprint(stack* stack1);

