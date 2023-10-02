#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> s;
	int a[100010]={0};
	char b[100010]={0};
	int len;
	while(scanf("%s",b)!=EOF){
		len=strlen(b);
		for(int i=0;i<len;i++){
			if(s.empty()){
				s.push(i);
				continue;
			}
			if(b[s.top()]=='('&&b[i]==')'){
				a[s.top()]=i;
				s.pop();
			}
			else s.push(i);
		}
			
		for(int i=0;i<len;i++){
			if(a[i]!=0){
				printf("%d %d\n",i+1,a[i]+1);
			}
		}
		memset(a,0,sizeof(a));
	}
	return 0;
}