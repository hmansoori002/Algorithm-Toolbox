#include <iostream>
using namespace std;
#define ll long long


ll get_fibonacci_last_digit_fast(ll n)
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
        f=s%10;
        s=curr%10;
    }
    return curr%10;
}

ll fibonacci_sum_fast(long long n) {
    ll new_n = (n + 2) ;
    ll new_last = get_fibonacci_last_digit_fast(new_n%60);
    if (new_last == 0) {
        return 9;
    } else {
        return new_last - 1;
    }
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_fast(n);
}
