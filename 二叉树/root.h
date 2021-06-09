#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int mydate;
//定义一个二叉树节点
struct note
{
	struct note* left;
	struct note* right;
	mydate date;
};
//前序遍历二叉树、
void front(struct note* root);
//中序遍历二叉树：
void BetWeen(struct note* root);
//后序
void back(struct note* root);
//计算节点的个数
void size(struct note* root, int* i);