#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

vector<int> op_sequence(int n)
{
   vector<int> min_steps(n+1);
   vector<int> prec_element(n+1);

   for(int i=2;i<=n;i++)
   {
       min_steps[i]=min_steps[i-1]+1;
       prec_element[i]=i-1;
       if(i%3==0 && min_steps[i/3]<min_steps[i])
       {
           min_steps[i]=min_steps[i/3]+1;
           prec_element[i]=i/3;
       }
       if(i%2==0 && min_steps[i/2]<min_steps[i])
       {
           min_steps[i]=min_steps[i/2]+1;
           prec_element[i]=i/2;
       }
   }
   vector<int> v;
   for(int i=n ;i!=0 ;i = prec_element[i])
   {
       v.push_back(i);
   }
   reverse(v.begin(),v.end());
   return v;
}

vector<int> optimal_sequence(int n) {
  std::vector<int> sequence;
  while (n >= 1) {
    sequence.push_back(n);
    if (n % 3 == 0) {
      n /= 3;
    } else if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n - 1;
    }
  }
  reverse(sequence.begin(), sequence.end());
  return sequence;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> sequence = op_sequence(n);
  std::cout << sequence.size() - 1 << std::endl;
  for (size_t i = 0; i < sequence.size(); ++i) {
    std::cout << sequence[i] << " ";
  }
}
