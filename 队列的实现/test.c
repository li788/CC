#include "Queque.h"

int main()
{
	
	//队的实现
	queque* q1 = NULL;
	pushback(&q1,1);//进入队列
	pushback(&q1,2);
	pushback(&q1,3);
	pushback(&q1,4);
	pushback(&q1,5);
	pushback(&q1,6);
	myprint(q1);//打印队列
	pop(&q1);//出队
	pop(&q1);
	pop(&q1);
	pop(&q1);
	pop(&q1);
	pop(&q1);
	myprint(q1);
	//判断一个队列是否为空；
	if (isempty(q1))
	{
		printf("这个队列非空");
	}
	else
	{
		printf("队列为空");
	}
	return 0;
}