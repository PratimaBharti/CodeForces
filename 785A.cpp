#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ans = 0;
  // unordered_map<string,int> mp;
  // mp["Tetrahedron"] = 4;
  // mp["Cube"] = 6;
  // mp["Octahedron"] = 8;
  // mp["Dodecahedron"] = 12;
  // mp["Icosahedron"] = 20;
  string poly;
  while(n--)
  {
    
    cin >> poly;
    if(poly == "Tetrahedron")
      ans+=4;
    else if(poly == "Cube")
      ans += 6;
    else if(poly == "Octahedron")
      ans+=  8;
    else if(poly == "Dodecahedron")
      ans+=12;
    else
      ans+=20;
  }

  cout << ans;
}