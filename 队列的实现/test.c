#include "Queque.h"

int main()
{
	
	//�ӵ�ʵ��
	queque* q1 = NULL;
	pushback(&q1,1);//�������
	pushback(&q1,2);
	pushback(&q1,3);
	pushback(&q1,4);
	pushback(&q1,5);
	pushback(&q1,6);
	myprint(q1);//��ӡ����
	pop(&q1);//����
	pop(&q1);
	pop(&q1);
	pop(&q1);
	pop(&q1);
	pop(&q1);
	myprint(q1);
	//�ж�һ�������Ƿ�Ϊ�գ�
	if (isempty(q1))
	{
		printf("������зǿ�");
	}
	else
	{
		printf("����Ϊ��");
	}
	return 0;
}