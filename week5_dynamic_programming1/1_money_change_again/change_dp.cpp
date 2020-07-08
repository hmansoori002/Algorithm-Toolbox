#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int get_change(int m)
{
    int arr[m+1];
    int coins[3]={1,3,4};

    arr[0]=0;
    for(int i=1;i<=m;i++)
    {
        arr[i]=INT_MAX;
        for(auto c:coins)
            if(i-c>=0)
                arr[i]= min(arr[i], arr[i-c]+1);
    }
    return arr[m];
}
/*
int get_change(int m) {
  //write your code here
  int arr[3][m+1];
  int s[3]={1,3,4};

  for(int i=0;i<3;i++)
  {
      for(int j=0;j<=m;j++)
      {
          if(j==0)arr[i][j]=0;
          if(i==0) arr[i][j]=j;
          else{
          if(j-s[i]>=0)
             arr[i][j]=min(arr[i-1][j] , arr[i][j-s[i]]+1);
          else
             arr[i][j]=arr[i-1][j];
          }
      }
  }
  return arr[2][m];
}

*/

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
