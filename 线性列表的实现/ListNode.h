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
void pushback(li* ps, mytype x);//β�巨
void pushfornt(li* ps, mytype x);//ͷ��
void popback(li* ps);//βɾ
void popfornt(li* ps);//ͷɾ
void Check(li* ps);//��鲢��չ�ڴ�
void myprintf(li* ps);//��ӡ�����б�.
void inset(li* ps, mytype x, int pos);//����λ�ò���һ������
void randpop(li* ps, int pos);//����λ��ɾ��
int find(li* ps, mytype x);//���������Ƿ����