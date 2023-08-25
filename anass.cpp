#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
    set <int> se;
    int n;
    string str;
    while(cin >> str >> n)
    {
        if (str == "insert")
            se.insert(n);
        else if (str == "exists")
        {
            if (se.find(n) != se.end())
                cout << "true\n";
            else
                cout << "false\n";
            
        }
        else if (str == "delete")
            se.erase(n);
    }
}