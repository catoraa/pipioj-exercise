#include<iostream>
using namespace std;
int main(){
	int n,m,q;
	int a[100005]={0},b[100005]={0},c[100005]={0};
	scanf("%d %d %d",&n,&m,&q);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<m;i++)scanf("%d",&b[i]);
	for(int i=0;i<q;i++)scanf("%d",&c[i]);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i]==b[j]){
				for(int k=0;k<q;k++){
					if(b[j]==c[k]){
						printf("%d ",c[k]);
						break;	
					}
				}
				break;
			}
		}
	}
	return 0;
}