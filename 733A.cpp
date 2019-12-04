#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,i,k=1,max=0;
	char a[100];
	cin >> a;
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y')
			k=1;
		else
			k++;
		if(max<k)
			max=k;
	}
	cout << max << endl;
	return 0;
}	
		