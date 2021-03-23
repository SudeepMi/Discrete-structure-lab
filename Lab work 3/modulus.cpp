#include <iostream>
using namespace std;
class Math
{
public:
    int base;
    int a;
    int mod;
    int result;
    Math(){
        cout << "\n\t****** PROGRAM TO CALCULATE b^n MOD m ******"<<endl;
        cout << "b = ";
    cin >> base;
    cout << "n = ";
    cin >> a;
    cout << "m = ";
    cin >> mod;
    }

    int power(int base, int a)
    {
       return (a != 0) ? (base * power(base, a - 1)) : 1;
    }

    void displayResult()
    {
        result = (power(base, a));
        result = result % mod;
        cout <<"\n\n\t##\t"<< base << " ^ " << a << " % " << mod << " = " << result <<"\n\n"<<endl;
            
    }
};

int main()
{
    Math math;
    math.displayResult();
    cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll: 32" << endl;
    return 0;
}
