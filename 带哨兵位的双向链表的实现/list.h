#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int mytype;
typedef struct list list;

//����һ���ڱ�λ
//˫������ڵ�Ķ���
struct list {

	list* prv;
	mytype a;
	list* next;
};
//����һ���ڵ�
list* newlist(mytype x);
//��ʼ���ڱ�λ
void newhead(list**head);
//ͷ��
void pushfront(list* head, mytype x);
//β�巨
void pushback(list* head, mytype x);
//ͷɾ
void popfront(list* head);
//βɾ
void popback(list* head);
//����
list* myfind(list* head, mytype x);
//����Ԫ�ص���ţ�����Ҫ�ҵ�����λ�ã�
list* my_find(list* head, int pos);
//����λ�ò���
void insert(list* head, int pos, mytype x);
//ɾ��ָ��λ��
void posdele(list* head, int pos);
//��ӡ˫������
void myprint(list* head);