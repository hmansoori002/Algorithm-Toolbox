#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long get_pisano_period_length(long long m) {
    long long F1 = 0, F2 = 1, F = F1 + F2;
    for (int i = 0; i < m * m; i++) {
        F = (F1 + F2) % m;
        F1 = F2;
        F2 = F;
        if (F1 == 0 && F2 == 1) return i + 1;
    }
}

long long get_fibonacci_huge_fast(long long n, long long m) {
    long long remainder = n % get_pisano_period_length(m);

    long long F1 = 0, F2 = 1, F = remainder;
    for (int i = 1; i < remainder; i++) {
        F = (F1 + F2) % m;
        F1 = F2;
        F2 = F;
    }
    return F % m;
}

int main() {
    long long n, m;

    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
}

/*
ll pisano_period(ll m)
{
    ll f=0;
    ll s=1;
    ll curr=f+s;
    for(int i=0;i<m*m;i++)
    {
        curr = (f+s)%m;
        f = s;
        s = curr;

        if(f==0 && s==1)
            return i+1;
    }
}

ll fabonacci_fast(ll n,ll m)
{
    ll remainder=n%(pisano_period(m));

    ll f=0;
    ll s=1;
    ll curr;
    for(int i=1;i<remainder;i++)
    {
        curr = (f+s)%m;
        f=s;
        s=curr;
    }
    return curr%m;
}

int main() {
	// your code goes here
	ll n,m;
	cin>>n>>m;
	cout<<fabonacci_fast(n,m)<<'\n';
	return 0;
}

*/

/*
#include <iostream>

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_naive(n, m) << '\n';
}
*/
