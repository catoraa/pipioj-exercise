#include<bits/stdc++.h>
using namespace std;
void input(int *L,int n){
	for(int i=0;i<n;i++){
		scanf("%d",&L[i]);
	}
}
	
void del_x(int *L,int n,int x){
	int del=0;
	for(int i=0;i<n;i++)
	if(L[i]==x){
		del++;
	}
	else{
		L[i-del]=L[i];
	}
	
	for(int i=0;i<n-del;i++){
		printf("%d ",L[i]);
	}
}

int main(){
	int n,x;
	int L[1000];
	scanf("%d %d",&n,&x);
	input(L,n);
	del_x(L,n,x);
	return 0;
}