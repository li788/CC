#pragma once
#include<stdio.h>
#include<stdlib.h>
#include <assert.h>
typedef int mytype;
//����һ����������
struct Slist 
{
	mytype a;
	struct Slist* next;
};
typedef struct Slist sl;
//����һ���ڵ�
sl* add(mytype x);
//ͷ��
//������������ͷ��ַ�ĵ�ַ����Ϊ��������ͷ��ַ���ܻ�ı䣩��Ϊ���ҵ���������ڶ���ΪҪ���������
void pushfront(sl**head, mytype x);
//β��
void pushback(sl**head, mytype x);
//ͷɾ
void popback(sl** head);
void popback2(sl** head);
//���ң�����û�����±���Ե����������ҵ���ֻ���ص�ַ��Ϊ����λ�ò����ɾ���ṩ�ӿ�
sl*find(sl* head, mytype x);
//����ĳ���
int mysize(sl* head);
//����λ�ò���
//posΪҪ�����λ�ã����ڼ���Ԫ�أ�����֧��λ�ò�ѯ������Ҫ������λ��ת���ɵ�ַ
sl* findpos(sl* head, int pos);
//���λ�������������
//��λ�ã�ͷ�壬ĩβ��β�壬�м���룬
void insert(sl** head,int pos ,mytype x);
//����λ��ɾ��
void pop(sl** head, int pos);
//��ӡ����
void myprint(sl* head);
