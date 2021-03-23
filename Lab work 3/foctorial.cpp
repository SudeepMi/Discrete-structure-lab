#include <iostream>
using namespace std;

class Math
{

public:
    int n;
    Math()
    {
         cout << "\n\n\t******* PROGRAM TO CALCULATE FACTORIAL ****** \n\n"<<endl;
        cout << "Enter a positive integer: ";
        cin >> n;
    }

    int factorial(int n)
    {
        if (n > 1)
            return n * factorial(n - 1);
        else
            return 1;
    }

    void result()
    {
        cout << "#\t Factorial of " << n << " = " << factorial(n);
       
    }
};

int main()
{
    Math m;
    m.result();
    
        cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll: 32" << endl;
    return 0;
}

