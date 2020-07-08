#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using std::vector;
using namespace std;

int optimal_weight(int W, const vector<int> &w) {
  //write your code here
  int current_weight = 0;
  for (size_t i = 0; i < w.size(); ++i) {
    if (current_weight + w[i] <= W) {
      current_weight += w[i];
    }
  }
  return current_weight;
}

int dp_weight(int W,const vector<int> &w)
{
   vector< vector<int> > v(w.size()+1, vector<int>(W+1));

  for (int i = 0; i <= w.size(); i++) {
  	for (int j = 0; j <= W; j++) {
      if(i==0||j==0)
          v[i][j]=0;
  	  else if (j - w[i - 1] >= 0) {
  	  	v[i][j] = max(v[i - 1][j], v[i - 1][j - w[i - 1]] + w[i - 1]);
  	  }
      else {
  	  	v[i][j] = v[i - 1][j];
  	  }
  	}
  }
	return v[w.size()][W];
}

int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> w[i];
  }
  std::cout << dp_weight(W, w) << '\n';
}
