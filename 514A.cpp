#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int x,y;
  cin >> x;
  y = 0;
  int a;
  long long int count = 1;
  while(x > 99)
  {
     a = x%10;
    if(a > 4 )
    {
      a = 9 - a;
    }
    y = count * a + y;
    count = count * 10;
    x = x/10;
  }
  while(x > 9)
  {
    a = x%10;
      if(a > 4 )
      {
        a = 9 - a;
      }
    y = count * a + y;
    count = count * 10;
    x = x/10;
  }

  if(x > 4 && x != 9)
  {
     y = count * (9-x) + y;
  }else
  {
    y = count * x + y;
  }



  cout << y;
  return 0;
}