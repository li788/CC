#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int mydate;
//����һ���������ڵ�
struct note
{
	struct note* left;
	struct note* right;
	mydate date;
};
//ǰ�������������
void front(struct note* root);
//���������������
void BetWeen(struct note* root);
//����
void back(struct note* root);
//����ڵ�ĸ���
void size(struct note* root, int* i);