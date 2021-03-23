#include <iostream>
using namespace std;
class Math{
    public:
    int x, y;
    int gcdExtended(int a, int b, int* x, int* y){
        // Base Case
        if (a == 0) {
            *x = 0;
            *y = 1;
            return b;
        }
        int x1, y1; // To store results of recursive call
        int gcd = gcdExtended(b % a, a, &x1, &y1);
        // Update x and y using results of recursive call
        *x = y1 - (b / a) * x1;
        *y = x1;
        return gcd;
    }
};

// Driver Program
int main()
{
    int a = 35, b = 5;
    Math m;
    int g = m.gcdExtended(a,b,&m.x, &m.y);
    cout<<"gcd("<<a<<","<<b<<") = "<<g<<endl;
    cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll : 32" << endl;
    return 0;
}
