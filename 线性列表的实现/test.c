#define _CRT_SECURE_NO_WARNINGS 1
#include"ListNode.h"
int main()
{
	li s1 = {NULL,0,0};
	//尾插法
	pushback(&s1, 2);
	pushback(&s1, 3);
	pushback(&s1, 4);
	//头插法：
	pushfornt(&s1, 5);
	pushfornt(&s1, 5);
	pushfornt(&s1, 5);
	pushfornt(&s1, 5);
	//尾删法;
	popback(& s1);
	//头删
	popfornt(&s1);
	popfornt(&s1);
	popfornt(&s1);
	//中间位置插入
	inset(&s1, 50, 2);
	//任意位置删除
	randpop(&s1, 1);
	//查找元素
	int ret=find(&s1, 50);
	//打印数组
	myprintf(&s1);
	//释放空间
	free(s1.a);
	return 0;
}