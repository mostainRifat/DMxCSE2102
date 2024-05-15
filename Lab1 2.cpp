#include <bits/stdc++.h>
using namespace std;

int prec(char ch) // preception
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else
        return 0;
}

bool condition1(string &exp)
{
    stack<char> eval;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            eval.push(exp[i]);
        else if (exp[i] == ')')
        {
            if (eval.top() != '(')
                return false;
            eval.pop();
            eval.pop();
        }
    }
    cout<<eval.top()<<endl;
    if (eval.empty())
        return true;
    return false;
}

bool condition2(string &exp) 
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '+' or exp[i] == '-' or exp[i] == '*' or exp[i] == '/')
        {
            if ((isdigit(exp[i + 1]) || isdigit(exp[i - 1])))
                continue;
            if (exp[i + 1] == '(' || exp[i - 1] == ')')
                continue;
            else
                return false;
        }
    }
    return true;
}

double evaluatePostfix(const string &postfix)
{
    stack<double> op;
    for (char ch : postfix)
    {
        if (isdigit(ch))
        {
            op.push(ch - '0');
        }
        else
        {
            double y = op.top();
            op.pop();
            double x = op.top();
            op.pop();
            switch (ch)
            {
            case '+':op.push(x + y); break;
            case '-':op.push(x - y); break;
            case '*':op.push(x * y); break;
            case '/':op.push(x / y); break;
            default: break;
            }
        }
    }
    return op.top();
}

int main()
{
    string s;
    cout << "Enter An Infix Notation : ";
    cin >> s;
    stack<char> st;
    int lll = s.size();
    string ans = "";

    if ( !(condition1(s)) || !(condition2(s)))
    {
        cout << "Invalid Notation "<<endl;
        cout << "error :"<<cc;
        return 0;
    }

    for (int i = 0; i < lll; i++)
    {
        char now = s[i];
        if (now >= '0' && now <= '9')
        {
            ans += now;
        }

        else if (now == '(')
        {
            st.push(now);
        }
        else if (now == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (st.size() && prec(st.top()) >= prec(now))
            {
                ans += st.top();
                st.pop();
            }
            st.push(now);
        }
    }
    while (st.size())
    {
        ans += st.top();
        st.pop();
    }
    cout << "Postfix Notation :" << ans << "\n";
    double result = evaluatePostfix(ans);
    cout << "Result: " << result << "\n";
    return 0;
}