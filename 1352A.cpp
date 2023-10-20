#include<bits/stdc++.h>
using namespace std;

void func(int n)
{
  int c = 1;
  vector<int> ans;
  while(n>0)
  {
    int a = n%10;
    n = n/10;
    if(a*c != 0)
    ans.push_back(a*c);

    c = 10*c;
  }
  cout << ans.size()<<"\n";
  for(auto it: ans)
  {
    if(it != 0)
    cout << it << " ";
  }
  cout <<"\n";
}
int main()
{
  int t,n;
  cin >> t;
  while(t--)
  {
    cin >> n;
    func(n);
  }
  return 0;
}