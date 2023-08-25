#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main() 
{
    int n;
    int i;
    cin >> n;
    cin.ignore();

    while(n > 0)
    {
        string line;
        getline(cin, line);
        stack<char> stk;
        i = 0;
        while(line[i])
        {
            while (line[i] && (line[i] == '(' || line[i] == '['))
                stk.push(line[i++]);
            if (!stk.empty() && line[i] == ')' && stk.top() == '(')
                stk.pop();
            else if (!stk.empty() && line[i] == ']' && stk.top() == '[')
                stk.pop();
            else
                break;
            i++;
        }
        if (stk.empty() && line[i] == '\0')
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
        n--;
    }
    return 0;
}