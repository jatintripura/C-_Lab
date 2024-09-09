
#include <iostream> 
using namespace std; 
void printEvenNumbers(int N) 
{
    int even = 0;
  
    for (int i = 1; i <=  N; i++) { 
		if (i % 2 == 0) 
		
        even += i;
    }
    cout << "\n The sum of Even :" << even<<endl;
}

void printOddNumbers(int N) 
{ 
int odd=0;

	for (int i = 1; i <=  N; i++) { 

		if (i % 2 != 0) 
		odd+=i;
	} 
	 cout << "\n The sum of odd :" << odd<<endl;
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
