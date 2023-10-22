#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin >> n >> m;
  vector<vector<char>> mat(n,vector<char> (m,'.'));

  int i = 0;
  bool flag = true;
  while(i < n)
  {
    if(flag)
    {
      for(int j=0;j<m;j++)
      {
        mat[i][j] = '#';
      }
      if(i+1 < n)
      {
        mat[i+1][m-1] = '#';
      }
    }else
    {
      for(int j=m-1;j>=0;j--)
      {
        mat[i][j] = '#';
      }
      if(i+1 < n)
      {
        mat[i+1][0] = '#';
      }
    }

    i = i+2;
    flag = !flag;
  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout << mat[i][j];
    }
    cout << "\n";
  }
}