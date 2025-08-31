#include <iostream>
using namespace std;
int main(){
    // to check whether the entered number is palindrome or not?
    int n;
    cout<<"enter n : ";
    cin>>n;
   int original;
    original=n;
    int reversed=0;
  while(n>0){
    int digit=n%10;
    reversed=reversed*10+digit;
    n=n/10;
  
  }
if(reversed==original){
    cout<<"the number is palindrome";
}
else{
    cout<<"the number is not palindrome";
}
    return 0;
}