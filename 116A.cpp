#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int maxi = 0;
  int prev = 0;
  int curr = 0;
  int exit,entry;
  for(int i=0;i<n;i++)
  {
    cin >> exit >> entry;
    curr = entry - exit;
    maxi = max(maxi,curr+prev);
    prev = curr+prev;
    // cout << maxi << "  ";
  }

  // cout << "\n";

  cout << maxi;
  return 0;
}