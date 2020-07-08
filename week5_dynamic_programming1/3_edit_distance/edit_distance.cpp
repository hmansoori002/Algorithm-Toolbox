#include <iostream>
#include<bits/stdc++.h>
#include <string>

using std::string;
using namespace std;

int edit_distance(const string &str1, const string &str2) {
  //write your code here
  int n1=str1.length();
  int n2=str2.length();
  int dist[n1+1][n2+1]={0};

  for(int i=0;i<=n2;i++)
    dist[0][i]=i;
  for(int i=0;i<=n1;i++)
    dist[i][0]=i;

  for(int i=1;i<=n1;i++)
  {
      for(int j=1;j<=n2;j++)
      {
          if(str1[i-1]==str2[j-1])
            dist[i][j]= dist[i-1][j-1];
          else
            dist[i][j]=min(dist[i-1][j],min(dist[i][j-1],dist[i-1][j-1]))+1;
      }
  }


  return dist[n1][n2];
}

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}
