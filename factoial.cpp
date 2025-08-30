#include <iostream>
using namespace std;
int main()
{
    int n;
    long long fact = 1;
    cout << "enter the n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "the factorial of " << n << " is " << fact << endl;

    return 0;
}