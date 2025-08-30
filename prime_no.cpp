#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;  

    if (n <= 1) {
        isPrime = false;   
    } else {
        for (int i = 2; i <= n / 2; i++) {  // logic behind n/2 is Example: 
            // For 12, possible divisors are 2, 3, 4, 6. Notice all divisors 
            // (except 12 itself) are ≤ 6 (which is 12/2).
            //  So, if no divisor is found till n/2, the number is prime.
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
