#include"root.h"
//����һ���������Ľڵ�

//ǰ�������������
void front(struct note* root)
{
	if (root == NULL)
	{
		printf("NULL\t");
		return;
	}
	printf("%d\t", root->date);
	front(root->left);
	front(root->right);
}
//�м�
void BetWeen(struct note* root)
{
	
	
	if (root== NULL)
	{
		printf("NULL\t");
		return;
	}
	BetWeen(root->left);
	printf("%d\t", root->date);
	BetWeen(root->right);
}
void back(struct note* root) 
{
	if (root == NULL)
	{
		printf("NULL\t");
		return;
	}
	back(root->left);
	back(root->right);
	printf("%d\t", root->date);

}
//����ڵ�ĸ���
void size(struct note* root, int* i) 
{
	if (root == NULL)
	{
		return ;
	}
	(*i) = (*i) + 1;
	size(root->left,i);
	size(root->right,i);
}