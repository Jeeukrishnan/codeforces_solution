#include <bits/stdc++.h>
using namespace std;
long long n , m;
int main(){
char x;
cin>>n>>m; 
for(int i=0; i< n*m; i++){ cin>>x;
 if (x!='G' && x!='W'&& x!='B') { cout<<"#Color"; return 0; } } 
 cout<<"#Black&White"; }