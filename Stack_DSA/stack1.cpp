#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<char> brackets;
    for (int i = 0; i < 6; i++)
    {
        char a;
        cin >> a;
        if (a == '(')
        {
            brackets.push(a);
        }
        else
        {
            brackets.pop();
        }
    }
    if (brackets.empty())
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}
