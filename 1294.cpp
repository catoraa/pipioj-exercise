#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,j,k,max;
	long long int pa[1100]={0},pb[1100]={0},a[1100]={0};
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&j);
		scanf("%lld",&pa[j]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&k);
		scanf("%lld",&pb[k]);
	}
	if(j>=k) max=j;
	else max=k;
	for(int i=0;i<max+1;i++){
		a[i]=pa[i]+pb[i];
		if(a[i]!=0){
			printf("%d %lld\n",i,a[i]);
		}
	}
	return 0;
}