#include <iostream>
using namespace std;

class Math
{

public:
    int base;
    int a;
    int result;
    Math(){
         cout << "\n\t******** PROGRAM TO CALCULATE a^n ********\n"<<endl;
        cout << "value for n = ";
    cin >> base;
    cout << "Value for a = ";
    cin >> a;
    }

    int power(int base, int a)
    {
       return (a != 0) ? (base * power(base, a - 1)) : 1;
    }

    void displayResult()
    {
        result = power(base, a);
        cout << "\n\n\n\t##\t" << base << " ^ " << a << " = " << result << "\n\n\n" <<endl;
        
    }
};

int main()
{
    Math math;
    math.displayResult();
    cout << "\n\nCode by: Sudeep Mishra" << endl;
        cout << "Roll : 32" << endl;
    return 0;
}

