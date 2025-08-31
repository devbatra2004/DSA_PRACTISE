#include <iostream>
using namespace std;
int main()
{
    // armstrong number ex- 153 - 1^3=1 , 5^3=125 , 3^3=27 , total =153
    // which are sum of the cubes of its digits like -1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, and 407

    // first to extract each digit in the number
    // then cube each digit
    // then add all the digit
    // then check whether the sum of all the cube digit is equal to original number

    int n, original, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> n;

    original = n; // store original number

    while (n > 0)
    {
        digit = n % 10;                      // extract last digit
        sum = sum + (digit * digit * digit); // cube and add
        n = n / 10;                          // remove last digit
    }

    if (sum == original)
    {
        cout << original << " is an Armstrong number" << endl;
    }
    else
    {
        cout << original << " is NOT an Armstrong number" << endl;
    }

    return 0;
}
