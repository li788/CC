#define _CRT_SECURE_NO_WARNINGS 1
#include"Slistnode.h"
//����һ���µĽڵ�
sl* add(mytype x)
{
	sl* newhead = (sl*)malloc(sizeof(sl));
	newhead->a=x;
	newhead->next = NULL;
	return newhead;
}
//ͷ�巨
void pushfront(sl**head, mytype x)
{
	//*head ��ʾ�ڵ��ͷ��ַ
	//**head ��ʾ�������ڵ��λ�ã���ΪҪͷ�ĵ�ַ��ı䣬�����ö���ָ�뱣�棩
	sl* temp = add(x);//�õ��½��ڵ�ĵ�ַ
	//�����������
		//1.ԭ������Ϊ�գ������ڽڵ�
		//2.ԭ������Ϊ��
	if (*head==NULL) //��������һ��Ԫ�صĵ�ַΪ�գ��ղ���ĵ�һ����Ϊͷ��
	{
		*head = temp;
	}
	else
	{
		temp->next = *head;//�µĽڵ�ָ�����������ͷ��ַ��
		*head = temp;//�������ͷ��ַ���и��ģ�
	}
	////����������������ϲ�
	//temp->next = *head;//�µĽڵ�ָ�����������ͷ��ַ��
	//*head = temp;//�������ͷ��ַ���и��ģ�
}
//β�巨
void pushback(sl** head, mytype x) 
{
	sl* temp = add(x);//�õ��½��ڵ�ĵ�ַ
	//��Ҫ�������������
	if (*head == NULL)//�жϵ�һ��Ԫ���Ƿ�Ϊ��
	{
		*head = temp;
	}
	else
	{
		//�ҵ����һ���ڵ㣺
		sl* tail = (*head);
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = temp;
	}
}
//ͷɾ
//��������֣�
//1.ԭ������Ϊ��
//2.ԭ��������һ���ڵ�
//3.ԭ���������������Ͻڵ�
//ɾ��ԭ�����ͷ��ڴ�
void popback(sl** head)
{
	//1.ԭ������Ϊ��,ֱ��ɾ�����
	if (*head == NULL)
	{
		return;
	}
	else if ((*head )->next== NULL)//ֻ��һ��Ԫ��
	{
		free(*head);
	}
	else
	{
		sl* temp = (*head)->next;//�����һ��Ԫ�ؽڵ�ĵ�ַ��
		free((*head));
		(*head) = temp;//�����浽�ĵ�ַ���ͷ��ַ��
	}
}
//βɾ
//ͬ�����������������ͷɾ����
void popback2(sl** head)
{
	//1.ԭ������Ϊ��,ֱ��ɾ�����
	if (*head == NULL)
	{
		return;
	}
	else if ((*head)->next == NULL)//ֻ��һ��Ԫ��
	{
		free(*head);
	}
	else 
	{
		sl* temp = NULL;//�����ҵ����ڶ���
		sl* try = *head;//���������һ��
		while (try->next)
		{
			temp = try;
			try = try->next;
		}
		free(try);
		temp->next = NULL;
	}
}
//���ң��ҵ��˷��ظ�Ԫ�صĵ�ַ���Ҳ���������
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
			printf("�ҵ��ˣ����ĵ�ַ�ǣ�%p\n", head);
			return head;
		}
		
	}
	printf("��Ǹû���ҵ�\n");
	return head;
	
}
//ȷ������ĳ���
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
//����λ�ò���
//����Ԫ�����ת����һ��λ��(ǰһ��λ��)
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
//����λ�ò���
void insert(sl** head, int pos, mytype x)
{
	int my_size = mysize(*head);
	assert(pos<my_size);//�����λ�ô�������ĳ���ϵͳ�ᱨ��
	sl*insertTemp=findpos(*head, pos);
	if (insertTemp == NULL|| insertTemp ==*head)//����ʼ����û���κ�Ԫ�أ�����ֱ���ٵ�0��λ��Ԫ�ز���ͷ��
	{
		pushfront(head,x);//����ͷ�庯����
	}
	else
	{
		sl* newtemp=add(x);//�½ڵ�ĵ�ַ
		sl* temp = insertTemp->next;//����Ҫ����λ�õĵ�ַ
		insertTemp->next = newtemp;//�޸�Ҫ����ǰһ��λ�õĽڵ�ָ���µĽڵ��ַ
		newtemp->next = temp;//�½ڵ�ָ�����λ�õĵ�ַ��
	}
}
//����λ��ɾ��
void pop(sl** head, int pos)
{
	int my_size = mysize(*head);
	assert(pos < my_size);//�����λ�ô�������ĳ���ϵͳ�ᱨ��
	sl* popTemp = findpos(*head, pos);//Ҫɾλ�õ�ǰһ��Ԫ��
	if (popTemp == NULL || popTemp == *head)//����ʼ����û���κ�Ԫ��
	{
		popback(head);//����ͷ�庯����
	}
	else 
	{
		sl* pos1= popTemp->next;//�ҵ�Ҫɾ��Ԫ��λ��
		sl* pos2 = pos1->next;//�ҵ�ҪɾԪ�ص���һ��λ��
		free(pos1);//������λ��
		popTemp->next = pos2;//Ҫɾ����ǰһ��λ��ָ���һ��λ�á�
	}
}
//��ӡ����
void myprint(sl* head)
{
	while (head)
	{
		printf("%d\t", head->a);
		head = head->next;
	}
	printf("\n");
}