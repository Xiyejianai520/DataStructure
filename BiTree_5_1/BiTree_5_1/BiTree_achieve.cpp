#include <iostream>

using namespace std;

char CreateBiTree(BiTree &T) {
	char ch;
	//printf("请输入字符串：");
	cin >> ch;
	if (ch == '#') {			//递归结束，建空树(节点)
		T = NULL;	
	}
	else {
		T = new BiTnode;
		//T = new BiTNode;		//生成根节点
		T -> data = ch;			//根结点数据域置为ch[i]
		CreateBiTree(T -> lchild);//递归创建左子树
		CreateBiTree(T -> rchild);//递归创建右子树
		return T -> data;
	}
}

void InOrderTraverse(BiTree T) {
	if (T) 
	{					//若二叉树非空
		InOrderTraverse(T -> lchild);//中序遍历左子树
		visit();	//访问根节点
		InOrderTraverse(T -> rchild);//中序遍历右子树
	}
}

void PreOrderTraverse(BiTree T)
{
	if(T)
	{
		visit();
		PreOrderTraverse(T -> lchild);
		PreOrderTraverse(T -> rchild);
	}
}

void PostOrderTraverse(BiTree T)
{
	if(T)
	{
		PreOrderTraverse(T -> lchild);
		PreOrderTraverse(T -> rchild);
		visit();
	}
}

void visit(void)
{
	cout << T -> data << "\t";
}
