#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int x = 0;
    string s;
    while (input--)
    {
        cin >> s;
        if(s[1] == '+')
        ++x;
        else
        x--;

    }
    cout << x << "\n";
    return 0;
    
}