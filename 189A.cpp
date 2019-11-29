#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector<int>v;
    int x;
    while(cin>>x)
    {  v.push_back(x); }
    int k=0;
    int sum=0;
  for(int j=0;j<v.size();j++)
{  k++;
   sum=sum+v[j];
   if(sum==a)
   {cout<<k;
   return 0;} 
   if(sum>a)
   {sum=sum-v[j];
   k--;}}

  cout<<k; 



}