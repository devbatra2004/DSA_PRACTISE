#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    if(n > 10){
        cout << "Please enter a number below 10 to calculate Fibonacci" << endl;
        return 0; 
    }

    int previous = 0, next = 1;

    cout << "Fibonacci Series: ";
    for(int i = 1; i <= n; i++){
        cout << previous << " ";  
        int final = previous + next;
        previous = next;
        next = final;
    }

    return 0;
}
