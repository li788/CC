#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef	int mydate;
struct queque 
{
	mydate a;
	struct queque* Que;
};
typedef struct queque  queque;

//����һ���µĽڵ�
queque* newque(mydate x);
//���
void pushback(queque** q1, mydate x);
//����
void pop(queque** q1);
//��ӡ����
void myprint(queque* q1);
//�ж��Ƿ�Ϊ��
bool isempty(queque*q1);