#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n,0);
  for(int i=0;i<n;i++)
  {
    cin >> v[i];
  }
 
  int maxIndex=0,minIndex=0;
  int maxi = INT_MIN;
  int mini = INT_MAX;

  for(int i=0;i<n;i++)
  {
    if(v[i] > maxi)
    {
      maxi = v[i];
      maxIndex = i;
    }
    if(v[i] <= mini)
    {
      mini = v[i];
      minIndex = i;
    }
  }

  int ans = 0;
  if(maxIndex < minIndex)
  {
    ans = maxIndex + n - 1 - minIndex;
  }
  else
  {
    ans = maxIndex + n - 1 - minIndex - 1;
  }
  std::cout << ans;
  return 0;
}