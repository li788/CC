#define _CRT_SECURE_NO_WARNINGS 1
#include"Slistnode.h"
int main()
{
	sl *ls =NULL;//初始化一个链表
	//头插
	pushfront(&ls, 1);
	pushfront(&ls, 2);
	pushfront(&ls, 3);
	pushfront(&ls, 4);
	pushfront(&ls, 5);
	pushfront(&ls, 6);
	//尾插
	pushback(&ls, 10);
	pushback(&ls, 20);
	pushback(&ls, 30);
	pushback(&ls, 40);
	//打印删除前
	myprint(ls);
	//头删
	popback(&ls);

	
	//查找
	find(ls, 10);
	//任意位置插入；
	insert(&ls, 1, 5);
	//打印删除前
	myprint(ls);
	//任意位置删除
	pop(&ls, 0);

	//打印删除后
	myprint(ls);
	return 0;
}