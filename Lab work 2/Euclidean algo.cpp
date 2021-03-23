#include <iostream>
using namespace std;

int main()
{
    int m, n; /* given numbers */
    cout<<"Enter two integer numbers: ";
    cin>>m>>n;
    while (n > 0)
    {
        int r = m % n;
        m = n;
        n = r;
    }
    cout<<"GCD = "<<m<<endl;
    cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll : 32" << endl;
   return 0;
}
