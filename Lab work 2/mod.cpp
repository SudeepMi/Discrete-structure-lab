#include <iostream>
using namespace std;


int power(int a, unsigned int b, int n)
{
    int res = 1;      // Initialize result
    a = a % n;  // Update a if it is more than or equal to n
    if (a == 0) return 0; // In case a is divisible by n;

    while (b > 0)
    {
        if (b & 1)//b is odd
            res = (res*a) % n;
        // b must be even now
        b = b>>1; // b = b/2
        a = (a*a) % n;
    }
    return res;
}
int main()
{
   int a = 7;
   cout<<"a="<<a<<endl;
   int b = 3;
   cout<<"\nb="<< b;
   int n = 17;
   cout<<"\nn= "<< n;
   cout<<"\n\nModular Exponentiation a^b(mod n) is "<< power(a, b, n);
   cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll : 32" << endl;
   return 0;
}
