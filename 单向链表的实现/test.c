#define _CRT_SECURE_NO_WARNINGS 1
#include"Slistnode.h"
int main()
{
	sl *ls =NULL;//��ʼ��һ������
	//ͷ��
	pushfront(&ls, 1);
	pushfront(&ls, 2);
	pushfront(&ls, 3);
	pushfront(&ls, 4);
	pushfront(&ls, 5);
	pushfront(&ls, 6);
	//β��
	pushback(&ls, 10);
	pushback(&ls, 20);
	pushback(&ls, 30);
	pushback(&ls, 40);
	//��ӡɾ��ǰ
	myprint(ls);
	//ͷɾ
	popback(&ls);

	
	//����
	find(ls, 10);
	//����λ�ò��룻
	insert(&ls, 1, 5);
	//��ӡɾ��ǰ
	myprint(ls);
	//����λ��ɾ��
	pop(&ls, 0);

	//��ӡɾ����
	myprint(ls);
	return 0;
}