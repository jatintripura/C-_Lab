#include <iostream>
using namespace std;
void leapYear(int n){
    if(n%400==0){
        cout << n << " is Learp year\n";

    }
    else if(n%4==0 && n%100!=0){
        cout << n << " is Leap Year\n";
    }
    else{
        cout << n << " is not Leap Year.\n";
    }
}
int main (){
    int n;
    cout << "Enter a year : ";
    cin >> n;
    leapYear(n);
}