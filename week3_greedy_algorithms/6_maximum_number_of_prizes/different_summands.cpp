#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

using std::vector;

vector<int> optimal_summands(int n) {
  vector<int> summands;


  int i=1;
  while(2*i<n)
  {
      summands.push_back(i);
      n = n-i;
      i++;
  }
  if(n>0)
    summands.push_back(n);
  //write your code here
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
