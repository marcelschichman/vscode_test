#include <iostream>
using namespace std;

int fnc2(int);
int fnc1()
{
    int x = 6;
    fnc2(x);
}

int fnc2(int param)
{
    int y = param + 10;
}

int main()
{
    cout << "hello world" << endl;
    int x = 5;
    fnc1();
    string s;
    cin >> s;
    cout << s << endl;
    cout << "zmena" << endl; 
}