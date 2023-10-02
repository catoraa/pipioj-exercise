#include<iostream>
using namespace std;

void input(int *L,int n){
	for(int i=0;i<n;i++){
		scanf("%d",&L[i]);
	}
}

void output(int *L,int n){
	for(int i=0;i<n;i++){
		printf("%d ",L[i]);
	}
}
void swap(int *L,int n){
	int temp=0;
	for(int i=0;i<n/2;i++){
		temp=L[i];
		L[i]=L[n-i-1];
		L[n-i-1]=temp;
	}
}

int main(){
	int n;
	int L[1000];
	scanf("%d",&n);
	input(L,n);
	swap(L,n);
	output(L,n);
	return 0;
}