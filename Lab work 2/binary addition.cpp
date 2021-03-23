#include <iostream>
using namespace std;

class Math{
    public:
    int number1,number2, binAdd, binSub;
    Math(){
        cout<<"Input first integer value: ";
        cin>>number1;
        cout<<"Input second integer value: ";
        cin>>number2;
    }
    int binAddition(int a,int b) //function for Binary Addition
    {
        int c; //carry
        while (b != 0) { //find carry and shift it left
        c = (a & b) << 1;
        //find the sum
        a=a^b;
        b=c;
        }
        return a;
    } //function for Binary Subtraction
    int binSubtracton(int a, int b){

        int carry; //get 2's compliment of b and add in a
        b = binAddition(~b, 1);
        while (b != 0) {
            //find carry and shift it left
            carry = (a & b) << 1;
            //find the sum
            a = a ^ b;
            b = carry;
        }
        return a;
    }
    void display(){
        binAdd=binAddition(number1,number2);
        binSub=binSubtracton(number1,number2);
        cout<<"Binary Addition: "<<binAdd<<endl;
        cout<<"Binary Subtraction: "<<binSub<<endl;
    }
};



int main()
{
    Math m;
    m.display();
    cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll : 32" << endl;
return 0;
}
