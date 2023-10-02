#include<bits/stdc++.h>
using namespace std;

struct bittree{
	char data;
	bittree *lchild,*rchild;
};

visit(bittree *t){
	printf("%d ",t->data);
}//访问节点 

void preorder(bittree *t){
	visit(t);
	preorder(t->lchild);
	preorder(t->rchild);
}//先序遍历

void preorder(bittree *t){
	preorder(t->lchild);
	visit(t);
	preorder(t->rchild);
}//中序遍历

void buildtree(char pre,char mid){
	int p=0,q=0,r;
	char root;
	root=pre[p];
	bittree *t=new bittree;
	t->data=root;
	while(mid[q]!=root){
		q++;
	}
	r=q;

	return 0;
}

int main(){
	char pre[1000],mid[1000];
	printf("请输入先序序列");
	scanf("%s",&pre);
	printf("请输入中序序列");
	scanf("%s",&mid);
	
	
	return 0; 
}