#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n = 5;
  int c = 0;
  int v = 0;
  while (!cin.eof())
  {
      cin >> v;
      if(v == 1)
      break;
      c++;
  }

  int row = c/5;
  int col = c%5;
  cout << abs(2-row)+abs(2-col);

  return 0;
}