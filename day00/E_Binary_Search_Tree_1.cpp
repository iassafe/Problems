#include <iostream>
#include <stack>
#include <string>


int main() 
{
    int n;
    int i;
    std::cin >> n;
    std::cin.ignore();

    while(n > 0)
    {
        std::string line;
        std::getline(std::cin, line);
        std::stack<char> stk;
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
            std::cout << "Yes" << "\n";
        else
            std::cout << "No" << "\n";
        n--;
    }
    return 0;
}
