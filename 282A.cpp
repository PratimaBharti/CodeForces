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
        if(s[0] == '+')
        ++x;
        else if(s[0] == '-')
        --x;
        else if(s[2] == '+')
        x++;
        else
        x--;

    }
    cout << x << "\n";
    return 0;
    
}