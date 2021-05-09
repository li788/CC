#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include <string.h>
int main()
{
	char bar[102]=" ";
	char s01[]= "|-/|";
	int i = 0;
	while (i <=100)
	{
		//注意\r的意思只是将光标移动到下一个位置.
		printf("[%-100s][%-3d%%][%c]\r", bar, i, s01[i%(sizeof(s01))]);
		i++;
		fflush(stdout);//fflush 刷新，stdout像屏幕标准输出，
		//系统默认的刷新只是见到\n会自动刷新
		bar[i] = '#';
		Sleep(100);
	}
	printf("\n");
	return 0;
}