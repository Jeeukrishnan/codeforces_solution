#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	for (int l=0;l<q;++l){
		string a,b;
		cin>>a>>b;
		bool tf=false;
		for (int i=0;i<a.size();++i){
			for (int j=0;j<b.size();++j){
				if (a[i]==b[j]){
					tf=true;
				}
			}
		}
		if (tf){
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
	}
}
