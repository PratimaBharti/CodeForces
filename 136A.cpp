#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> ans(n,0);
  int l ;
  for(int i=0;i<n;i++)
  {
    cin >> l;
    ans[l-1] = i+1;
  }
  for(int  i=0;i<n;i++)
  {
    cout << ans[i] <<" ";
  }
}