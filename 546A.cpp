#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int k,w,n;
   cin >> k>> w >> n;

   long long int req = (k*n*(n+1))/2;
   if(req > w)
   cout << req - w;

   else
   cout << 0;
   return 0;

}