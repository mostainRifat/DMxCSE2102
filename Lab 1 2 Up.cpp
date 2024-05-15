#include <bits/stdc++.h>
using namespace std;

int prec(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else
        return 0;
}

bool isOperand(char ch)
{
    return isdigit(ch);
}

bool isValidInfix(const string &infix)
{
    stack<char> parentheses;

    for (char ch : infix)
    {
        if (isOperand(ch))
        {
            // Operand, do nothing
        }
        else if (ch == '(')
        {
            parentheses.push(ch);
        }
        else if (ch == ')')
        {
            if (parentheses.empty() || parentheses.top() != '(')
            {
                return false;
            }
            parentheses.pop();
        }
        else if (prec(ch) > 0)
        {
            // Operator, do nothing
        }
        else
        {
            return false; // Invalid character
        }
    }

    return parentheses.empty();
}

double evaluateExpression(const string &expression)
{
    istringstream iss(expression);
    stack<double> operands;
    stack<char> operators;

    while (iss)
    {
        string token;
        iss >> token;

        if (token.empty())
        {
            break;
        }

        char firstChar = token[0];

        if (isdigit(firstChar) || (firstChar == '-' && token.size() > 1 && isdigit(token[1])))
        {
            // Operand
            double operand = stod(token);
            operands.push(operand);
        }
        else if (prec(firstChar) > 0)
        {
            // Operator
            while (!operators.empty() && prec(operators.top()) >= prec(firstChar))
            {
                double operand2 = operands.top();
                operands.pop();
                double operand1 = operands.top();
                operands.pop();
                char op = operators.top();
                operators.pop();

                switch (op)
                {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                case '/':
                    operands.push(operand1 / operand2);
                    break;
                default:
                    break;
                }
            }

            operators.push(firstChar);
        }
        else
        {
            return NAN; // Invalid token
        }
    }

    // Process remaining operators
    while (!operators.empty())
    {
        double operand2 = operands.top();
        operands.pop();
        double operand1 = operands.top();
        operands.pop();
        char op = operators.top();
        operators.pop();

        switch (op)
        {
        case '+':
            operands.push(operand1 + operand2);
            break;
        case '-':
            operands.push(operand1 - operand2);
            break;
        case '*':
            operands.push(operand1 * operand2);
            break;
        case '/':
            operands.push(operand1 / operand2);
            break;
        default:
            break;
        }
    }

    if (operands.size() == 1 && operators.empty())
    {
        return operands.top();
    }
    else
    {
        return NAN; // Invalid expression
    }
}

int main()
{
    string infixExpression;

    cout << "Enter an Infix Expression: ";
    getline(cin, infixExpression);

    if (isValidInfix(infixExpression))
    {
        double result = evaluateExpression(infixExpression);
        if (!isnan(result))
        {
            cout << "Result: " << result << "\n";
        }
        else
        {
            cout << "Invalid Expression\n";
        }
    }
    else
    {
        cout << "Invalid Infix Expression\n";
    }

    return 0;
}
