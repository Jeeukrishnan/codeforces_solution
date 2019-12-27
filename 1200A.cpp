#include<bits/stdc++.h>
using namespace std;
int main()
{
	/* code */
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a[10]={0};
	for(int i=0;i<n;i++){
		if(s[i]=='L'){
			int j=0;
			while(a[j]!=0) j++;
			a[j]=1;
		}
		else if(s[i]=='R'){
			int k=9;
			while(a[k]!=0) k--;
			a[k]=1;
		}
		else{
			a[s[i]-'0']=0;
		}
 
	}
	for(int i=0;i<10;i++) cout<<a[i];
}