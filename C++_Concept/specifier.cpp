#include <iostream>
using namespace std;
class Number{
    private:
        int a, b;
        public:
        void setValue(int x,int y){
            a = x;
            b = y;
        }
        int getValue(){
            return a + b;

        }
};

int main()
{

    Number n;

    int p, q;
    cout << "Enter two integer number: ";
    cin >> p >> q;
    n.setValue(p,q);
    cout << n.getValue();
    return 0;
}