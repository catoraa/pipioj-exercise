#include<stdio.h>

struct node{
	int data;
	node *next;
};

int main(){
	node *h=new node;
	node *p=h;
	p->data=1;
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=2;i<=n;i++){//正常来说是i=1 i<=n 
		p->next=new node;
		p=p->next;
		p->data=i;
	}
	p->next=h;
	
	while(h->next!=h){
		for(int i=1;i<k-1;i++){
			h=h->next;
		}
		h->next=h->next->next;
		h=h->next;
	}
	
	printf("%d",h->data);
	return 0;
}