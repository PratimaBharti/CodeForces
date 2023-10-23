#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int luckyNo(ll num)
{
  if(num == 0)
    return 0;
  while(num > 0)
  {
    if(num%10 != 4 && num%10 != 7)
    return 0;

    num = num/10;
  }
  return 1;

}
int main()
{
    ll n;
    ll count = 0;
    cin >> n;
    while(n>0)
    {
      if((n%10 == 4) || (n%10 == 7))
        count++;
      n = n/10;

    }
    if(luckyNo(count) == 1)
    {
      cout << "YES";
    }else
    cout << "NO";

    return 0;
}