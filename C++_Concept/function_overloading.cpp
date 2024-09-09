
#include <iostream>
using namespace std;

// function with 2 int type parameters
int area(int x, int y) {
 return x * y;
}

// function with float type parameter
float area(float x) {
 return x * x;
}

int main() {
 int result1 = area(70, 2); //function call for the function with 2 int type parameters
 float result2 = area(5.6); //function call for the function with float type parameter
 
 cout << "Area of rectangle using integer arguments: " << result1 << endl;
 cout << "Area of square using a float argument: " << result2 << endl;
 
 return 0;
} 