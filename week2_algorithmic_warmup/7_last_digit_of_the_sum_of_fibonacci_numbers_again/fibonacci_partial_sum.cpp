#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#include <vector>
#define ll long long
using std::vector;


ll pisano_period(ll m)
{
    ll f=0;
    ll s=1;
    ll curr;
    for(int i=0;i<m*m;i++)
    {
        curr = (f+s)%m;
        f = s;
        s = curr;

        if(f==0 && s==1)
            return i+1;
    }
}

ll fabonacci_fast(ll n)
{

    if (n <= 1)
        return n;
    ll remainder=n;

    ll f=0;
    ll s=1;
    ll curr;
    for(int i=1;i<remainder;i++)
    {
        curr = (f+s)%10;
        f=s;
        s=curr;
    }
    return curr%10;
}


ll Huge_Fibonacci(ll m,ll n) {
	int t2 = fabonacci_fast((n + 2)%60);   //sum fo firts n terms of fibonacci no's
	int t1 = fabonacci_fast( (m+1)%60);    //sum of first m-1 terms of fibonacci series

	if (t2 >= t1)
		return (t2 - t1);
	else
		return ((10 + t2) - t1);
}



int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << Huge_Fibonacci(from, to) << '\n';
}
