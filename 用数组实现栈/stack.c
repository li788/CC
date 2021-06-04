#include"stack.h"
//»Î’ª
void insert(stack* stack1, mydate x)
{
	assert(stack1);
	if (stack1->a == NULL)
	{
		stack1->a = (mydate*)malloc((stack1->Capacity) * sizeof(mydate));
	}
		if (stack1->top == stack1->Capacity)
		{
			mydate* newa2 = (mydate*)realloc(stack1->a, (stack1->Capacity) * sizeof(mydate) * 2);
			if (newa2 == NULL)
			{
				printf("¿©»› ß∞‹");
				exit(-1);
			}
			else
			{
				stack1->Capacity = stack1->Capacity * 2;
			}
		}
		(stack1->a)[stack1->top] = x;
		stack1->top= stack1->top+1;
}
//≥ˆ’ª
void pop(stack* stack1)
{
	assert(stack1);
	assert(stack1->top>0);

	stack1->top--;
}
//¥Ú”°
void myprint(stack* stack1)
{
	for (int i = 0; i < stack1->top; i++)
	{
		printf("%d\t", stack1->a[i]);
	}
	printf("\n");
}