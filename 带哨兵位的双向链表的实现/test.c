#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
int main()
{
	list* head = {NULL};
	newhead(&head);
	printf("头插：\n");
	//头插
	pushfront(head, 1);
	pushfront(head, 2);
	pushfront(head, 3);
	pushfront(head, 4);
	//打印双向链表
	myprint(head);
	
	////尾插
	pushback(head, 5);
	pushback(head, 6);
	pushback(head, 7);
	printf("尾插：\n");
	//打印双向链表
	myprint(head);
	printf("头删：\n");
	//头删：
	popfront(head);
	//打印双向链表
	myprint(head);
	//尾删
	printf("尾删：\n");
	popback(head);
	//打印双向链表
	myprint(head);
	//查找：
	myfind(head, 3);
	//给定位置插入
	insert(head, 2, 20);
	printf("在某个位置插入一个数\n");
	myprint(head);
	//删除指定位置
	posdele(head, 3);
	printf("删除某个位置节点\n");
	myprint(head);
	return 0;
}