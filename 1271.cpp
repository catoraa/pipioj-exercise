#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
	node(){next=NULL;}
};
int main(){
	int n,l,r,v;
	node *N=new node;
	node *p,*q,*s=N;
	scanf("%d %d %d",&n,&l,&r);
	for(int i=1;i<=n;i++){
		if(i>l&&i<=r){
			p->next=new node;
			p->next->next=q;
			q=p->next;
			scanf("%d",&v);
			q->data=v;
		}
		else{
			p=s;
			s->next=new node;
			s=s->next;
			q=s;
			scanf("%d",&v);
			s->data=v;
		}
	}
	p=N->next;
	while(1){
		printf("%d ",p->data);
		if(p==s)break;
		p=p->next;
	}
	return 0;
}