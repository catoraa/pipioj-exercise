#include<bits/stdc++.h>
using namespace std;
void p(int j,int k,int l){
	printf("%d %d %d\n",j,k,l);
}
int main(){
	int n,m,q;
	int a[100005]={0},b[100005]={0},c[100005]={0};
	scanf("%d %d %d",&n,&m,&q);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<m;i++)scanf("%d",&b[i]);
	for(int i=0;i<q;i++)scanf("%d",&c[i]);
	int j=0,k=0,l=0;
	
	while(j+1!=n&&k+1!=m&&l+1!=q){
		p(j,k,l);
		if(a[j]==b[k]==c[l]){printf("%d\n",a[j]);j++,k++,l++;continue;}
		
		if(a[j]<b[k]&&a[j]<c[l]){j++;continue;}
		if(b[k]<a[j]&&b[k]<c[l]){k++;continue;}
		if(c [l]<b[k]&&c[l]<a[j]){l++;continue;}
		
		if(a[j]==b[k]&&b[k]<c[j]){j++,k++;continue;}
		if(a[j]==c[l]&&c[l]<b[k]){j++,l++;continue;}
		if(b[k]==c[l]&&c[l]<a[j]){k++,l++;continue;}
	}
	return 0;
}