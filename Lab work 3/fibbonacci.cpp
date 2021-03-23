#include <iostream> //dd
using namespace std;
class Math
{    
public:
    int x, i = 0;
    Math()
    {
    	cout << "\n\n\t****** PROGRAM TO PRINT FIBONACCI SEQUENCE UPTO Nth TERM ******\n"<<endl;
        cout << "#\tEnter the value of n : ";
        cin >> x;
    }

    int fib(int x)
    {
        if ((x == 1) || (x == 0))
        {
            return (x);
        }
        else
        {
            return (fib(x - 1) + fib(x - 2));
        }
    }
    void result()
    {
        cout << "\n#\tFibonnaci Sequence : ";
        while (i < x)
        {
            cout << " " << fib(i);
            i++;
        }
        
    cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll: 32" << endl;
    }
};

int main()
{
    Math m;
    m.result();

    return 0;
}
