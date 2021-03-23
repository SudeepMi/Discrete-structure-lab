#include <iostream>
using namespace std;
int main()
{
 int i,num,MI,b;
 cout<<"Enter a input number:\n";
 cin>>num;
 cout<<"Enter number to test if its a multiplicative inverse of input number:\n";
 cin>>b;
 for(i=1;i<=num;i++)
 {
  MI=((i*26)+1);
  if(MI%num==0)
  {
   break;
  }
 }
 MI=MI/num;
 if(MI==b){
       cout<<b<<" is multiplicative inverse of"<<num;
         }
    else
    {
     cout<<b<<" is not multiplicative inverse of "<<num;
    }
    cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll : 32" << endl;
 	return 0;
}
