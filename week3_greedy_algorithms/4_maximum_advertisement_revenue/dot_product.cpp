#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
int main() {
	// your code goes here
	//ll n;
	cin>>n;
	ll a[n],b[n];
	for(ll i=0;i<n;i++)
	    cin>>a[i];
	for(ll i=0;i<n;i++)
	    cin>>b[i];

	sort(a,a+n);
	sort(b,b+n);

	ll res=0;
	for(ll i=0;i<n;i++)
	    res += a[i]*b[i];
	cout<<res<<"\n";
	return 0;
}


/*

#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

long long max_dot_product(vector<int> a, vector<int> b) {
  // write your code here
  long long result = 0;
  for (size_t i = 0; i < a.size(); i++) {
    result += ((long long) a[i]) * b[i];
  }
  return result;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl;
}
*/
