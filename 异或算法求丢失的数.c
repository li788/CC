#define _CRT_SECURE_NO_WARNINGS 1//保证输入的数字合法
#include<stdio.h>//输入输出头文件
# include<stdio.h>
#include<math.h>
//查找0-n缺失的那一个整数；位异或法，
int Findless(int *arr,int len) 
{
	int x = 0;
	for (int ii = 0; ii < len; ii++)
	{
		x = x ^ arr[ii];
	}
	//第一步异或与的结果
	//第二步继续异或与；（原理不太理解）
	printf("%d", x);
	for (int j = 0; j < len+1; j++)		//0-n长度是n+1；
	{
		x = x ^ j;//位异或
	}
	return x;
}
int main() 
{
	int arr1[] = { 9, 6, 4, 2, 3, 5, 7, 0, 8,1,10,12};
	int len = sizeof(arr1) / sizeof(int);//求数组的长度
	int ret =Findless(&arr1,len);
	printf("丢失的数找到了是%d", ret);
	return 0;
}