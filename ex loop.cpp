#include <iostream>
#include <string>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch == 'a' || ch == 'z')
    {
        cout << "this is lowercase smaller" << endl;
    }
    else if (ch == 'A' && ch == 'Z')
    {
        cout << "this is upprcase smaller" << endl;
    }
    else if (ch == '0' && ch == '9')
    {
        cout << "this is number" << endl;
    }
    else
    {
        cout << "invalid input" << endl;
    }
}