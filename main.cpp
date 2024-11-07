#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name : " ;
    cin >> name;
    if (name == "admin")
    {
        cout << "OK";
    }
    else 
    {
        cout << "Not Ok" << endl;
    }
    return 0;
}