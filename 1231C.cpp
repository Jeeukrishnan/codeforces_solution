#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long n,sum,m,res,o[510][510],v1,v2,i,j;
int main() {
    cin>>n>>m;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            cin>>o[i][j];
        }
    }
    for(i=n; i>=1; i--){
        for(j=m; j>=1; j--){
            if(o[i][j]==0) 
              {o[i][j]=min(o[i+1][j],o[i][j+1])-1;}
            if(o[i][j]<=o[i][j-1]|| o[i][j]<=o[i-1][j])
             {
                cout<<-1<<endl;
                return 0;
            }
            res+=o[i][j];
        }
    }
    cout<<res<<endl;
    return 0;
}