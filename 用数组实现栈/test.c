#include"stack.h"
int main()
{
	stack s1 = {0,4,NULL};//³õÊ¼»¯
	insert(&s1, 1);
	insert(&s1, 2);
	insert(&s1, 3);
	insert(&s1, 4);
	insert(&s1, 5);
	insert(&s1, 6);
	insert(&s1, 7);
	insert(&s1, 8);
	myprint(&s1);
	pop(&s1);//³öÕ»
	pop(&s1);
	myprint(&s1);
	return 0;
}