#include <algorithm>
#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;
using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  //write your code here
   int n=a.size();
  map<int ,int> mp;
  int res=0;
  for(int i=0;i<n;i++)
  {
      mp[a[i]]++;
      if(res<mp[a[i]])
        res = mp[a[i]];

  }
  //cout<<res<<"\n";
  if(res <= (n/2) )
    return -1;
  else
    return 1;

}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
