#define _CRT_SECURE_NO_WARNINGS 1
#include"Slistnode.h"
int main()
{
	sl *ls =NULL;//��ʼ��һ������
	//ͷ��
	pushfront(&ls, 5);
	pushfront(&ls, 6);
	pushfront(&ls, 5);
	//β��
	pushback(&ls, 10);
	pushback(&ls, 20);
	//��ӡɾ��ǰ
	myprint(ls);
	//ͷɾ
	popback(&ls);
	popback(&ls);
	popback2(&ls);
	//����
	find(ls, 10);
	//����λ�ò��룻
	insert(&ls, 1, 5);
	//��ӡɾ��ǰ
	myprint(ls);
	//����λ��ɾ��
	pop(&ls, 2);
	//��ӡɾ����
	myprint(ls);
	return 0;
}