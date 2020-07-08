#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;
using std::vector;

bool partition3(int k,vector<int> &A) {
  //write your code here
  int sum0=accumulate(A.begin(),A.end(),0);
  if(sum0%k) return 0;

  int n=A.size();
    vector<vector<int> > value(sum0/k+1,vector<int>(n+1));
    for(int i=1;i<=n;i++)
    {
        int wi=A[i-1];

        for(int w=1;w<=sum0/k;w++) {
            value[w][i]=value[w][i-1];
            if(w>=wi)
            {
                value[w][i]=max(value[w-wi][i-1]+wi,value[w][i-1]);
            }
        }
     }
    return value[sum0/k][n]==sum0/k;
}

int main() {
  int n,k=3;
  std::cin >> n;
  vector<int> A(n);
  for (size_t i = 0; i < A.size(); ++i) {
    std::cin >> A[i];
  }
  std::cout << partition3(k,A) << '\n';
}
