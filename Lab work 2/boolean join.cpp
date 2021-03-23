#include<iostream>
using namespace std;

int main(){
int m,n,p,q,i,j,k;
int first[5][5],second[5][5],join[5][5];
cout<<"Enter number of rows and column of first matrix:\n";
cin>>m>>n;
cout<<"Enter elements of first matrix:\n";
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    cin>>first[i][j];
}
cout<<"Enter num of rows and column of second matrix:\n";
cin>>p>>q;
cout<<"Enter elements of second matrix:\n";

for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    cin>>second[i][j];
}

//join operation

for(i=0;i<n;i++)
{
    for(j=0;j<q;j++)
    join[i][j]=first[i][j]||second[i][j];
}
cout<<"Boolean join of the matrices:\n";
     for(i=0;i<m;i++)
     {
         for(j=0;j<q;j++)

             cout<<"\t"<<join[i][j];
     }

 cout<<"\n";
cout << "\n\nCode by: Sudeep Mishra" << endl;
cout << "Roll : 32" << endl;

return 0;
}
