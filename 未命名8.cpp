#include<bits/stdc++.h>
using namespace std;

struct bittree{
	char data;
	bittree *lchild,*rchild;
};

visit(bittree *t){
	printf("%d ",t->data);
}//���ʽڵ� 

void preorder(bittree *t){
	visit(t);
	preorder(t->lchild);
	preorder(t->rchild);
}//�������

void preorder(bittree *t){
	preorder(t->lchild);
	visit(t);
	preorder(t->rchild);
}//�������

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
	printf("��������������");
	scanf("%s",&pre);
	printf("��������������");
	scanf("%s",&mid);
	
	
	return 0; 
}