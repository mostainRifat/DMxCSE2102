#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    cout << "PI using Gregory-Leibniz Series"<<endl;
    int terms;
    double ans1 = 0;
    cout << "how many terms use in the series: ";
    cin >> terms;
    for (int n = 0; n <= terms; n++)
    {
        ans1 += (n % 2 == 0 ? 1.0 : -1.0) / (2 * n + 1);
    }
    ans1 *= 4;
    cout << "Value of PI = " << setprecision(25) << ans1 << endl<<endl;

    cout << "PI using Machin's Formula"<<endl;
    double ans2 = 16 * atan(1.0 / 5) - 4 * atan(1.0 / 239);
    cout << "Value of PI = " << setprecision(25) << ans2 << endl<<endl;

    cout << "PI using Archimedes Formula"<<endl;
    double N, s, ans3;
    cout << "no of sides: ";
    cin >> N;
    cout << "length of each side: ";
    cin >> s;
    double perimeter = N * s;
    double diameter = double(2) * 1;
    ans3 = perimeter / diameter;
    cout << "Value of PI = " << setprecision(25) << ans3 << endl<<endl;

    cout << "PI using Chudnovsky Brother Formula"<<endl;
    int term;
    cout << "how many terms use in series: ";
    cin >> term;
    long double ans4 = 0.0;
    for (int k = 0; k < term; k++)
    {
        long double numerator = pow(-1, k) * factorial(6 * k) * (13591409 + 545140134 * k);
        long double denominator = factorial(3 * k) * pow(factorial(k), 3) * pow(640320, 3 * k + 1.5);
        ans4 += numerator / denominator;
    }
    cout << "Value of PI = " << setprecision(25) << (1.0 / (12.0 * ans4)) << endl<<endl;

    cout << "PI using David Bailey, Peter Borwein and Simon Plouffe (BBP) Formula"<<endl;
    int n;
    cout << "how many terms use in series: ";
    cin >> n;
    long double ans5 = 0.0;
    for (int k = 0; k < n; k++)
    {
        long double p = 1.0 / pow(16.0, k);
        long double q = (4.0 / (8 * k + 1)) - (2.0 / (8 * k + 4)) - (1.0 / (8 * k + 5)) - (1.0 / (8 * k + 6));
        ans5 += p * q;
    }
    cout << "Value of PI = " << setprecision(25) << ans5 << endl<<endl;
    return 0;
}