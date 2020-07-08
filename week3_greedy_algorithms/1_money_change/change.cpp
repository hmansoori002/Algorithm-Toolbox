#include <iostream>

int get_change(int m) {
  //write your code here
  int cnt=0;
  if(m>=10)
  {
      cnt+= m/10;
      m=m%10;
  }
   if(m >= 5)
  {
      cnt+= m/5;
      m=m%5;
  }
  if (m>0)
    cnt+=m;
  return cnt;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
