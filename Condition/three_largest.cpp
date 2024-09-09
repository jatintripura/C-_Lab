#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter thee number : ";
    cin >> a >> b >> c;
    if(a>b && a>c){
        cout << a << " is the largest number of " << a <<"," << b<<"," << c;
    }
    else if(b>a && b>c){
        cout << b << " is the largest number of " << a <<"," << b<<"," << c;
    }
    else{
        cout << c << " is the largest number of " << a <<"," << b<<"," << c;
    }
    return 0;
}