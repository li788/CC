#include"root.h"
int main()
{
	//����һ����ȫ����������5���ڵ㣻
	struct note NOT01;
	struct note NOT02;
	struct note NOT03;
	struct note NOT04;
	struct note NOT05;
	
	NOT01.date=1;
	NOT01.left = &NOT02;
	NOT01.right = &NOT03;

	NOT02.date = 2;
	NOT02.left = &NOT04;
	NOT02.right = &NOT05;

	NOT03.date = 3;
	NOT03.left =NULL;
	NOT03.right = NULL;

	NOT04.date = 4;
	NOT04.left =NULL;
	NOT04.right = NULL;

	NOT05.date = 5;
	NOT05.left= NULL;
	NOT05.right= NULL;

	//ǰ�����������
	front(&NOT01);
	printf("\n");
	//����
	BetWeen(&NOT01);
	//����
	printf("\n");
	back(&NOT01);
	//size
	int i = 0;
	size(&NOT01, &i);
	printf("\n");
	printf("%d\n", i);
	return 0;
}