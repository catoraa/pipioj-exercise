#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
	node(){next=NULL;}
};

int main(){
	node *head=new node,*p=head,*q;
	int n,v;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&v);
		node *q=new node;
		q->data=v;
		p->next=q;
		p=q;
	}
	p=head;
	while(p){
		p=p->next;
		printf("%d ",p->data);
	}
	return 0;
}