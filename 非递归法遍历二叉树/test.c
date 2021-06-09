#include "Queque.h"

int main()
{
	//用队列实现二叉树的遍历，前序法
	root NOT1;
	root NOT2;
	root NOT3;
	root NOT4;
	root NOT5;
	root NOT6;
	root NOT7;
	root NOT8;
	
	NOT1.date = 'A';
	NOT1.left = &NOT2;
	NOT1.right = &NOT3;
	
	NOT2.date = 'B';
	NOT2.left = &NOT4;
	NOT2.right =&NOT5;

	NOT3.date = 'C';
	NOT3.left = &NOT6;
	NOT3.right = &NOT7;

	NOT4.date = 'D';
	NOT4.left = NULL;
	NOT4.right = NULL;

	NOT5.date = 'E';
	NOT5.left = NULL;
	NOT5.right = &NOT8;


	NOT6.date = 'F';
	NOT6.left = NULL;
	NOT6.right = NULL;

	NOT7.date = 'G';
	NOT7.left = NULL;
	NOT7.right = NULL;

	NOT8.date = 'H';
	NOT8.left = NULL;
	NOT8.right = NULL;
	queque* q1 = NULL;
	if (&NOT1)
	{
		pushback(&q1, &NOT1);
	}
	while (isempty(q1))
	{
		root* temp =(q1->a);
		pop(&q1);
		printf("%c\t", temp->date);
		if (temp->left)
		{
			pushback(&q1,temp->left);
		}
		if (temp->right)
		{
			pushback(&q1, temp->right);
		}
	}
	return 0;
}