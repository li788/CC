#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
//创建一个节点
list* newlist(mytype x)
{
	list* nowlist = (list*)malloc(sizeof(list));
	nowlist->prv = NULL;
	nowlist->a = x;
	nowlist->next= NULL;
	return nowlist;
}
//初始化哨兵位
void newhead(list** head)
{
	*head = newlist(0);
	(*head)->prv = *head;
	(*head)->next = *head;
}
//头插
void pushfront(list* head, mytype x)
{
	assert(head);//确保哨兵位的存在
	list* listnode = newlist(x);
	listnode->next = head->next;
	(head->next)->prv=listnode;
	head->next = listnode;
	listnode->prv = head;
}
//尾插法
void pushback(list* head, mytype x)
{
	assert(head);//确保哨兵位的存在
	list* listnode = newlist(x);
	list* cur1= head->next;
	while (cur1->next!= head)
	{
		cur1 = cur1->next;
	}
	cur1->next = listnode;
	listnode->prv = cur1;
	head->prv = listnode;
	listnode->next = head;
}
//头删
void popfront(list* head)
{
	assert(head);
	list* phead = head->next;
	phead->next->prv = head;
	head->next = phead->next;
	free(phead);
}
//尾删
void popback(list* head) 
{
	assert(head);//用来这个链表是否存在
	list* cur = head->next;
	while (cur->next !=head)
	{
		cur = cur->next;
	}
	//cur为最后一个位置
	//cur->prv//倒数第二个节点的地址
	cur->prv->next = head;
	head->prv = cur->prv;
	free(cur);
}
//查找一个链表的元素，找到了返回这个元素的位置，找不到返回一个空地址
list* myfind(list* head, mytype x)
{
	assert(head);
	int i=1;
	list* cur = head->next;
	while (cur->a != x)
	{
		cur = cur->next;
		i++;
		if (cur == head)
		{
			printf("很抱歉您要查找的数并不存在");
			return NULL;
		}
	}
	printf("恭喜您找找到了，它的地址是%p在链表中是第%d个元素\n", cur,i);
	return cur;
}
//给定元素的序号，我们要找到他的位置：
list* my_find(list* head, int pos)
{
	assert(head);
	if (pos == 0)
	{
		return head;
	}
	else
	{
		int i = 0;
		list* cur = head->next;
		while (i != pos)
		{
			cur = cur->next;
			i++;
			if (cur->next ==head)
			{
				printf("您输入的元素位置不存在\n");
				return NULL;

			}
		}
		return cur;
	}

}
//给定位置插入
void insert(list* head, int pos, mytype x)
{
	list* listpos = my_find(head, pos);//找到要插入的位置
	list* listnode = newlist(x);//创建一个节点，待插入的点
	list* listpos01 = listpos->prv;//找到要插入的前一个位置
	listpos01->next = listnode;
	listnode->prv = listpos01;
	listnode->next = listpos;
	listpos->prv = listnode;
}
//删除指定位置
void posdele(list* head, int pos)
{
	list* listpos = my_find(head, pos);//找到要删除的位置
	list* listpos01 = listpos->prv;//找到要删除的前一个位置
	list* listpos02= listpos->next;//找到要删除的后一个位置
	listpos01->next = listpos02;
	listpos02->prv = listpos01;
	free(listpos);
}
//打印双向链表
void myprint(list* head)
{
	assert(head);
	list* cur = head->next;
	while (cur!= head)
	{
		printf("%d\t",cur->a);
		cur =cur->next;
	}
	printf("\n");
}