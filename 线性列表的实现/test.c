#define _CRT_SECURE_NO_WARNINGS 1
#include"ListNode.h"
int main()
{
	li s1 = {NULL,0,0};
	//β�巨
	pushback(&s1, 2);
	pushback(&s1, 3);
	pushback(&s1, 4);
	//ͷ�巨��
	pushfornt(&s1, 5);
	pushfornt(&s1, 5);
	pushfornt(&s1, 5);
	pushfornt(&s1, 5);
	//βɾ��;
	popback(& s1);
	//ͷɾ
	popfornt(&s1);
	popfornt(&s1);
	popfornt(&s1);
	//�м�λ�ò���
	inset(&s1, 50, 2);
	//����λ��ɾ��
	randpop(&s1, 1);
	//����Ԫ��
	int ret=find(&s1, 50);
	//��ӡ����
	myprintf(&s1);
	//�ͷſռ�
	free(s1.a);
	return 0;
}