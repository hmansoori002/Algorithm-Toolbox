#include <iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

bool sortbyval(const pair<int,int> &p1,const pair<int,int> &p2)
{
    return ((double)p1.second/p1.first > (double)p2.second/p2.first);
}

int main() {
	// your code goes here
	int n,w;
	cin>>n>>w;
	std::vector<pair<int,int> > vec ;
	int vi,wi;
	for(int i=0;i<n;i++)
	{
	    cin>>vi>>wi;
	    vec.push_back(make_pair(wi,vi));
	}

	sort(vec.begin(),vec.end(),sortbyval);

	int i=0;
	double cost=0.0,ratio;
	while(w>0 && i<vec.size())
	{
	    if(w-vec[i].first > 0)
	    {
	        cost += vec[i].second;
	        w = w-vec[i].first;
	    }
	    else
	    {
	        ratio = (double)vec[i].second/vec[i].first;
	        cost += w*ratio;
	        w=0;
	    }
	    i++;
	}

	//for(int i=0;i<vec.size();i++)
	//{
	 //   cout<<vec[i].first<<" "<<vec[i].second<<"\n";
	//}

	std::cout << std::fixed << std::setprecision(4) << cost<<"\n";
	return 0;
}


/*
#include <iostream>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;

  // write your code here

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
*/
