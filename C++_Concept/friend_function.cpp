#include <iostream>
using namespace std;

class Main{
    private:
        int a, b;

    public:
        void getdata();
        friend int sum(Main);
};
void Main::getdata()
{

    cout << "Enter two number:";
    cin >> a >> b;
}
int sum(Main number){
    return number.a + number.b;
}
int main()
{
    Main n;
    n.getdata();
    cout << sum(n)<<endl;
}