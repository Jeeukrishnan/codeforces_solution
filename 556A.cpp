#include <bits/stdc++.h>
using namespace std;

int main()
{ int n;
cin>>n;
    string s;
cin>>s;
cout<<abs(count(s.begin(),s.end(),'1') - count(s.begin(),s.end(),'0'));}