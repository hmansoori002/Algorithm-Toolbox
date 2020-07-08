#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
using std::vector;

int lcs2(vector<int> &a, vector<int> &b) {
  //write your code here
  int n=a.size();
  int m=b.size();
  int lcs[n+1][m+1];
  for(int i=0;i<=n;i++)
  {
      for(int j=0;j<=m;j++)
      {
          if(i==0 ||j==0)
            lcs[i][j]=0;

          else if(a[i-1]==b[j-1])
            lcs[i][j]=lcs[i-1][j-1]+1;
          else
            lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
      }
  }

  return lcs[n][m];
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  size_t m;
  std::cin >> m;
  vector<int> b(m);
  for (size_t i = 0; i < m; i++) {
    std::cin >> b[i];
  }

  std::cout << lcs2(a, b) << std::endl;
}
