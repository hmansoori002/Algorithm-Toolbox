#include <iostream>
#include <cassert>
#include <vector>

using std::vector;
typedef long long int ll;


ll binary_search(const vector<ll> &a, ll x) {
  ll left = 0, right = (ll)a.size();
  //write your code here
  while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (x == a[mid]) return mid;
        else if (x < a[mid]) right = mid - 1;
        else left = mid + 1;
    }
   return -1;
}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  ll n;
  std::cin >> n;
  vector<ll> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  ll m;
  std::cin >> m;
  vector<ll> b(m);
  for (ll i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (ll i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i]) << ' ';
  }
}
