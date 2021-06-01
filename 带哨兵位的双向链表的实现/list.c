#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
//����һ���ڵ�
list* newlist(mytype x)
{
	list* nowlist = (list*)malloc(sizeof(list));
	nowlist->prv = NULL;
	nowlist->a = x;
	nowlist->next= NULL;
	return nowlist;
}
//��ʼ���ڱ�λ
void newhead(list** head)
{
	*head = newlist(0);
	(*head)->prv = *head;
	(*head)->next = *head;
}
//ͷ��
void pushfront(list* head, mytype x)
{
	assert(head);//ȷ���ڱ�λ�Ĵ���
	list* listnode = newlist(x);
	listnode->next = head->next;
	(head->next)->prv=listnode;
	head->next = listnode;
	listnode->prv = head;
}
//β�巨
void pushback(list* head, mytype x)
{
	assert(head);//ȷ���ڱ�λ�Ĵ���
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
//ͷɾ
void popfront(list* head)
{
	assert(head);
	list* phead = head->next;
	phead->next->prv = head;
	head->next = phead->next;
	free(phead);
}
//βɾ
void popback(list* head) 
{
	assert(head);//������������Ƿ����
	list* cur = head->next;
	while (cur->next !=head)
	{
		cur = cur->next;
	}
	//curΪ���һ��λ��
	//cur->prv//�����ڶ����ڵ�ĵ�ַ
	cur->prv->next = head;
	head->prv = cur->prv;
	free(cur);
}
//����һ�������Ԫ�أ��ҵ��˷������Ԫ�ص�λ�ã��Ҳ�������һ���յ�ַ
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
			printf("�ܱ�Ǹ��Ҫ���ҵ�����������");
			return NULL;
		}
	}
	printf("��ϲ�����ҵ��ˣ����ĵ�ַ��%p���������ǵ�%d��Ԫ��\n", cur,i);
	return cur;
}
//����Ԫ�ص���ţ�����Ҫ�ҵ�����λ�ã�
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
				printf("�������Ԫ��λ�ò�����\n");
				return NULL;

			}
		}
		return cur;
	}

}
//����λ�ò���
void insert(list* head, int pos, mytype x)
{
	list* listpos = my_find(head, pos);//�ҵ�Ҫ�����λ��
	list* listnode = newlist(x);//����һ���ڵ㣬������ĵ�
	list* listpos01 = listpos->prv;//�ҵ�Ҫ�����ǰһ��λ��
	listpos01->next = listnode;
	listnode->prv = listpos01;
	listnode->next = listpos;
	listpos->prv = listnode;
}
//ɾ��ָ��λ��
void posdele(list* head, int pos)
{
	list* listpos = my_find(head, pos);//�ҵ�Ҫɾ����λ��
	list* listpos01 = listpos->prv;//�ҵ�Ҫɾ����ǰһ��λ��
	list* listpos02= listpos->next;//�ҵ�Ҫɾ���ĺ�һ��λ��
	listpos01->next = listpos02;
	listpos02->prv = listpos01;
	free(listpos);
}
//��ӡ˫������
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