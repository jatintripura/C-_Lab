#include<iostream>
 using namespace std;
  class Number
   {
    private:
       int a,b;
    public:
      void input()
       {
         cout<<"Input two number:-";
         cin>>a>>b;
       }
     void Addition()
       {
        int s=a+b;
         cout<<"\nAddition = "<<s;
       }
     void Subtraction()
      {
        int s=a-b;
         cout<<"\nSubtraction = "<<s;
      }
     void Multiplication()
      {
        int s=a*b;
         cout<<"\nMultiplication = "<<s;
      }
       void Division()
      {
        int s=a/b;
         cout<<"\nDivision = "<<s;
      }
      void Modulus()
      {
        int s=a%b;
         cout<<"\nModulus = "<<s;
      }
    };
  int main()
   {
     Number n1;
     n1.input();
     n1.Modulus(); 
     n1.Addition();
     n1.Division();
     n1.Subtraction();
  n1.Multiplication();    
 
   }