
#include <iostream> 
using namespace std; 
void printEvenNumbers(int N) 
{ 
	cout << "Even: "; 
	for (int i = 1; i <= 2 * N; i++) { 
		if (i % 2 == 0) 
			cout << i << " "; 
	} 
} 

void printOddNumbers(int N) 
{ 

	cout << "\nOdd: "; 
	for (int i = 1; i <= 2 * N; i++) { 

		if (i % 2 != 0) 
			cout << i << " "; 
	} 
} 
int main() 
{
    int n;
    cout << "Enter a positve rang: ";
    cin >> n;

    printEvenNumbers(n); 
	printOddNumbers(n); 

	return 0; 
} 
