#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
int main()
{
	list* head = {NULL};
	newhead(&head);
	printf("ͷ�壺\n");
	//ͷ��
	pushfront(head, 1);
	pushfront(head, 2);
	pushfront(head, 3);
	pushfront(head, 4);
	//��ӡ˫������
	myprint(head);
	
	////β��
	pushback(head, 5);
	pushback(head, 6);
	pushback(head, 7);
	printf("β�壺\n");
	//��ӡ˫������
	myprint(head);
	printf("ͷɾ��\n");
	//ͷɾ��
	popfront(head);
	//��ӡ˫������
	myprint(head);
	//βɾ
	printf("βɾ��\n");
	popback(head);
	//��ӡ˫������
	myprint(head);
	//���ң�
	myfind(head, 3);
	//����λ�ò���
	insert(head, 2, 20);
	printf("��ĳ��λ�ò���һ����\n");
	myprint(head);
	//ɾ��ָ��λ��
	posdele(head, 3);
	printf("ɾ��ĳ��λ�ýڵ�\n");
	myprint(head);
	return 0;
}