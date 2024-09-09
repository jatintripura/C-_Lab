#include <iostream>
using namespace std;
//power
int findPower(int base, int power){
    if(power==0){
        return 1;
    }
    else{
        return (base * findPower(base, power - 1));
    }
}
  
int main(){
    int n,m;
    cout << "\nEnter the positive integer base and power:";
    cin >> n>>m;
   
     cout<<"The base "<<n<<" and "<<" Power of "<<m<<" is : "<<findPower(n, m)<<endl;
    
    return 0;
}
