#include<bits/stdc++.h>
using namespace std;
int main()
{long long int n;
cin>>n;
int t=n%4;
if(n==0)
  {cout<<"1";}
else if (t==0)
 cout<<"6";
else if(t==1)
   cout<<"8";
else if(t==2)
   cout<<"4";
else if(t==3)
   cout<< "2";      

}