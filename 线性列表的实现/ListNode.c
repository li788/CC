#define _CRT_SECURE_NO_WARNINGS 1
#include"ListNode.h"
//�жϿռ��Ƿ��ã������Ļ������µĿռ�
void Check(li*ps)
{
	if (ps->size ==ps->capicity)
	{
		mytype newcapicity = ps->capicity == 0 ? 4 : ps->capicity * 2;
		//��a�ĺ��������
		//realloc��չ�ɹ�������չ���ڴ�û�л�����һ����
		mytype* temp = (mytype*)realloc(ps->a,newcapicity * sizeof(mytype));
		if (temp == NULL)
		{
			printf("��a��������ʧ��");
			
		}
		ps->a = temp;
		ps->capicity = newcapicity;
	}
}
//β�巨
void pushback(li* ps, mytype x)
{
	Check(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
//ͷ��
void pushfornt(li* ps, mytype x)
{
	Check(ps);
	for (int i = ps->size; 0<i;i--)
	{
		ps->a[i] = ps->a[i-1];
	}
	ps->a[0] = x;
	ps->size++;
}
//βɾ
void popback(li* ps)
{
	ps->size--;
}
//ͷɾ
void popfornt(li* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
//�м����һ������
void inset(li* ps, mytype x, int pos)
{
	Check(ps);
	for (int i = ps->size; i > pos; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[pos] = x;
	ps->size++;
}
//��ĳһ��λ��ɾ��
void randpop(li* ps, int pos)
{
	for (int i = pos; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
//����ĳ��Ԫ�أ�������ڷ��������±�
int find(li* ps, mytype x)
{
	
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			printf("�ҵ��ˣ�����λ����%d\n", i);
			return i;
		}
	}
	return -1;
}
//��ӡ����б�
void myprintf(li*ps)
{
	printf("��ӡ�����������\n");
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d\t", ps->a[i]);
	}
}