#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll d,m,n;
    cin>>d>>m>>n;

    ll x[n+2];
    x[0]=0;
    ll a;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        x[i]=a;
    }
    x[n+1]=d;
    int flag=1;
    ll curr = 0,res=0;
    while(curr<=n)
    {
        ll prev = curr;
        while(curr<=n && x[curr+1]-x[prev]<=m)
            curr++;
        if( curr==prev)
          {  flag=0;
              break;
          }
        if(curr<=n)
            res++;
    }
    if(flag)
        cout<<res<<endl;
    else
        cout<<-1<<endl;
}
