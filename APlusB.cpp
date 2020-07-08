#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    long long arr[n];
    int m1=0,m2=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]>=arr[1])
    {
        m1=0;
        m2=1;
    }
    else
    {
        m1=1;
        m2=0; 
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[m1])
            {
                m2=m1;
                m1=i;
            }
        if(i!=m1 && arr[i]>arr[m2])
            m2 = i;
    }
    
    cout<<arr[m1]*arr[m2];
}
