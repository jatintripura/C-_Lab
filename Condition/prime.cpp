#include <iostream>
using namespace std;
int main()
{
    int n,i,prime=0;
    cout << "Enter a number : ";
    cin >> n;
    for (i = 1; i <= n;i++){
        if(n%i==0){
            prime++;
        }
    }
    if(prime==2){
        cout << n << " a Prime number.";
    }
    else{
        cout << n << " is not a prime number.";
    }
    return 0;
}