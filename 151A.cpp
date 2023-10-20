#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,k,l,c,d,p,nl,np;
  cin >> n>>k >>l>>c>>d >>p>>nl>>np;
  int a = k*l/nl;
  int b = c*d/1;
  int e = p/np;
  int ans = min(a,b);
  ans = min(ans,e);
  cout << ans/n;
}