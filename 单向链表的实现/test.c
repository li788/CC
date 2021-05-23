#define _CRT_SECURE_NO_WARNINGS 1
#include"Slistnode.h"
int main()
{
	sl *ls =NULL;//初始化一个链表
	//头插
	pushfront(&ls, 5);
	pushfront(&ls, 6);
	pushfront(&ls, 5);
	//尾插
	pushback(&ls, 10);
	pushback(&ls, 20);
	//打印删除前
	myprint(ls);
	//头删
	popback(&ls);
	popback(&ls);
	popback2(&ls);
	//查找
	find(ls, 10);
	//任意位置插入；
	insert(&ls, 1, 5);
	//打印删除前
	myprint(ls);
	//任意位置删除
	pop(&ls, 2);
	//打印删除后
	myprint(ls);
	return 0;
}