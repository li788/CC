#define _CRT_SECURE_NO_WARNINGS 1
#include"Slistnode.h"
//扩建一个新的节点
sl* add(mytype x)
{
	sl* newhead = (sl*)malloc(sizeof(sl));
	newhead->a=x;
	newhead->next = NULL;
	return newhead;
}
//头插法
void pushfront(sl**head, mytype x)
{
	//*head 表示节点的头地址
	//**head 表示存放链表节点的位置（因为要头的地址会改变，所以用二级指针保存）
	sl* temp = add(x);//拿到新建节点的地址
	//分两种情况：
		//1.原有链表为空，不存在节点
		//2.原有链表不为空
	if (*head==NULL) //如果链表第一个元素的地址为空，刚插入的第一个即为头；
	{
		*head = temp;
	}
	else
	{
		temp->next = *head;//新的节点指向下老链表的头地址，
		*head = temp;//对链表的头地址进行更改；
	}
	////将上面两个种情况合并
	//temp->next = *head;//新的节点指向下老链表的头地址，
	//*head = temp;//对链表的头地址进行更改；
}
//尾插法
void pushback(sl** head, mytype x) 
{
	sl* temp = add(x);//拿到新建节点的地址
	//仍要分两种情况讨论
	if (*head == NULL)//判断第一个元素是否为空
	{
		*head = temp;
	}
	else
	{
		//找到最后一个节点：
		sl* tail = (*head);
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = temp;
	}
}
//头删
//分情况三种：
//1.原有链表为空
//2.原有链表有一个节点
//3.原有链表有三个以上节点
//删除原理是释放内存
void popback(sl** head)
{
	//1.原有链表为空,直接删除清空
	if (*head == NULL)
	{
		return;
	}
	else if ((*head )->next== NULL)//只有一个元素
	{
		free(*head);
	}
	else
	{
		sl* temp = (*head)->next;//保存第一个元素节点的地址，
		free((*head));
		(*head) = temp;//将保存到的地址变成头地址；
	}
}
//尾删
//同样考虑三种情况，和头删类似
void popback2(sl** head)
{
	//1.原有链表为空,直接删除清空
	if (*head == NULL)
	{
		return;
	}
	else if ((*head)->next == NULL)//只有一个元素
	{
		free(*head);
	}
	else 
	{
		sl* temp = NULL;//用来找倒数第二个
		sl* try = *head;//用来找最后一个
		while (try->next)
		{
			temp = try;
			try = try->next;
		}
		free(try);
		temp->next = NULL;
	}
}
//查找：找到了返回该元素的地址，找不到结束；
sl* find(sl* head, mytype x)
{
	while (head)
	{
		if (head->a!= x)
		{
			head = head->next;
	
		}
		else
		{
			printf("找到了，他的地址是：%p\n", head);
			return head;
		}
		
	}
	printf("抱歉没有找到\n");
	return head;
	
}
//确定链表的长度
int mysize(sl* head)
{   
	int i = 0;
	while (head)
	{
		i++;
		head=head->next;	
	}
	return i;
}
//任意位置插入
//根据元素序号转换成一个位置(前一个位置)
sl* findpos(sl* head, int pos)
{
	sl* postemp=NULL;
	int i = 0;
	while (1)
	{
		if (i!=pos&&head!=NULL)
		{
			postemp = head;
			head = head->next;
			i++;
		}
		else
		{
			return postemp;
		}

	}
	return head;

}
//任意位置插入
void insert(sl** head, int pos, mytype x)
{
	int my_size = mysize(*head);
	assert(pos<my_size);//输入的位置大于链表的长度系统会报错
	sl*insertTemp=findpos(*head, pos);
	if (insertTemp == NULL|| insertTemp ==*head)//代表开始链表没有任何元素，或则直接再第0个位置元素插入头插
	{
		pushfront(head,x);//调用头插函数；
	}
	else
	{
		sl* newtemp=add(x);//新节点的地址
		sl* temp = insertTemp->next;//保存要插入位置的地址
		insertTemp->next = newtemp;//修改要插入前一个位置的节点指向新的节点地址
		newtemp->next = temp;//新节点指向插入位置的地址；
	}
}
//任意位置删除
void pop(sl** head, int pos)
{
	int my_size = mysize(*head);
	assert(pos < my_size);//输入的位置大于链表的长度系统会报错
	sl* popTemp = findpos(*head, pos);//要删位置的前一个元素
	if (popTemp == NULL || popTemp == *head)//代表开始链表没有任何元素
	{
		popback(head);//调用头插函数；
	}
	else 
	{
		sl* pos1= popTemp->next;//找到要删的元素位置
		sl* pos2 = pos1->next;//找到要删元素的下一个位置
		free(pos1);//清除这个位置
		popTemp->next = pos2;//要删除的前一个位置指向后一个位置。
	}
}
//打印链表
void myprint(sl* head)
{
	while (head)
	{
		printf("%d\t", head->a);
		head = head->next;
	}
	printf("\n");
}