#include<bits/stdc++.h>
using namespace std;
int main()
{
 int ans=10000;
    int s,p;
    cin>>s>>p;
    vector<int>v(p);
    for (int i = 0; i < p; i++)
    {   cin>>v[i];
        /* code */
    }

 sort(v.begin(),v.end());
  for (int i = 0; i+s-1 <p; i++)
  {   ans=min(ans,v[i+s-1]-v[i]);
      /* code */
  }
  cout<<ans;
    
    
}