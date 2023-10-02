#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
	node(){next=NULL;}
};

void HeadInsert(node *head,int v){
		node *q=new node();
		q->data=v;
		if(head->next!=NULL)q->next=head->next;
		head->next=q;
}

int main(){
	node *head=new node,*p=head;
	int n,v;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&v);
		HeadInsert(head,v);
	}
	while(p){
		p=p->next;
		printf("%d ",p->data);
	}
	return 0;
}