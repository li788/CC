#include "Queque.h"
queque* newque(mydate x)
{
	queque* Newque = (queque*)malloc(sizeof(queque));
	Newque->a = x;
	Newque->Que = NULL;
	return Newque;
}
//入队
void pushback(queque** q1, mydate x)
{
	queque* Q1 = newque(x);
	if ((*q1) == NULL)
	{
		(*q1) = Q1;
		return;
	}
	else
	{
		queque* cur = (*q1);
		while (cur->Que)
		{
			cur = cur->Que;
		}
		cur->Que = Q1;
	}
}
//出队
void pop(queque** q1)
{
	assert(q1);
	queque *temp= (*q1)->Que;
	free(*q1);
	(*q1)= temp;
}
//
bool isempty(queque*q1)
{
	if (q1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void myprint(queque* q1)
{
	queque* cur = q1;
	while (cur)
	{
		printf("%d\t", cur->a);
		cur = cur->Que;
	}
	printf("\n");

}