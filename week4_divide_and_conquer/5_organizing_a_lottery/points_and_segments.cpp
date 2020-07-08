#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
using std::vector;

vector<int> fast_count_segments(vector<int> starts, vector<int> ends, vector<int> points) {
  vector<int> cnt(points.size());

  vector<int> a(starts.size()+1 , 0);

  for(int i=0;i<starts.size();i++)
  {
      a[starts[i]] +=1;
      a[ends[i]+1] -=1;
  }
  for(int i=1;i<starts.size();i++)
  {
      a[i]=a[i]+a[i-1];
  }
  for(int i=0;i<points.size();i++)
  {
      cout<<a[points[i]]<<" ";
      cnt[i]=a[points[i]];
  }
  //write your code here
  return cnt;
}

vector<int> naive_count_segments(vector<int> starts, vector<int> ends, vector<int> points) {
  vector<int> cnt(points.size());
  for (size_t i = 0; i < points.size(); i++) {
    for (size_t j = 0; j < starts.size(); j++) {
      cnt[i] += starts[j] <= points[i] && points[i] <= ends[j];
    }
  }
  return cnt;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  vector<int> starts(n), ends(n);
  for (size_t i = 0; i < starts.size(); i++) {
    std::cin >> starts[i] >> ends[i];
  }
  vector<int> points(m);
  for (size_t i = 0; i < points.size(); i++) {
    std::cin >> points[i];
  }
  //use fast_count_segments
  vector<int> cnt = fast_count_segments(starts, ends, points);
  for (size_t i = 0; i < cnt.size(); i++) {
    std::cout << cnt[i] << ' ';
  }
}
