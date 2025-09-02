#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number for reverse";
    cin>>n;
    int digit;
    int reversed=0;
    for(int i=0;i<n;i++){
     digit=n%10;
     reversed = reversed * 10 + digit;
     n = n / 10;
    }
cout<<"the reversed number is : "<<digit;
   
    return 0;

}