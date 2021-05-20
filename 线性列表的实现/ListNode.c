#define _CRT_SECURE_NO_WARNINGS 1
#include"ListNode.h"
//判断空间是否够用，不够的话开辟新的空间
void Check(li*ps)
{
	if (ps->size ==ps->capicity)
	{
		mytype newcapicity = ps->capicity == 0 ? 4 : ps->capicity * 2;
		//在a的后面加容量
		//realloc扩展成功继续扩展，内存没有会在找一块呢
		mytype* temp = (mytype*)realloc(ps->a,newcapicity * sizeof(mytype));
		if (temp == NULL)
		{
			printf("在a后面扩容失败");
			
		}
		ps->a = temp;
		ps->capicity = newcapicity;
	}
}
//尾插法
void pushback(li* ps, mytype x)
{
	Check(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
//头插
void pushfornt(li* ps, mytype x)
{
	Check(ps);
	for (int i = ps->size; 0<i;i--)
	{
		ps->a[i] = ps->a[i-1];
	}
	ps->a[0] = x;
	ps->size++;
}
//尾删
void popback(li* ps)
{
	ps->size--;
}
//头删
void popfornt(li* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
//中间插入一个数据
void inset(li* ps, mytype x, int pos)
{
	Check(ps);
	for (int i = ps->size; i > pos; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[pos] = x;
	ps->size++;
}
//从某一个位置删除
void randpop(li* ps, int pos)
{
	for (int i = pos; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
//查找某个元素，如果存在返回他的下表
int find(li* ps, mytype x)
{
	
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			printf("找到了，他的位置是%d\n", i);
			return i;
		}
	}
	return -1;
}
//打印这个列表：
void myprintf(li*ps)
{
	printf("打印这个数据链表\n");
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d\t", ps->a[i]);
	}
}