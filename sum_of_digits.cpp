#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"the sum of numbers of "<<n<<" is "<<sum<<endl;
    return 0;
}