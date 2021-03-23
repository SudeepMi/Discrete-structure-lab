#include <iostream>
using namespace std;

class Math{
    public:
    int arr1[3] = { 1, 2, 3 }; // first set  
    int arr2[3] = { 4, 5, 6 }; // second set  
    int n1 = sizeof(arr1) / sizeof(arr1[0]);  
    int n2 = sizeof(arr2) / sizeof(arr2[0]);  
    int i,j; 
    void displayEl(){
        cout<<"Elements of first set \n"; 
        for ( i = 0; i < n1; i++){
            cout<<arr1[i]<<endl;
            } 
        cout<<"\n-----------------\n"; 
        cout<<"Elements of second set \n";
        for ( j = 0; j < n2; j++){ 
            cout<<arr2[j]<<endl;
        }
    }
    void Cartesian(){
        cout<<"\n-----------------\n"; 
        cout<<"Cartesian product:  \n"; 
        for(i = 0; i < n2; i++){
            for ( j = 0; j < n1; j++){
                cout<<"{"<<arr1[i]<<","<<arr2[j]<<"}"<<endl;
                }
        }
    }
};
int main(){
    Math m;
    m.displayEl();
    m.Cartesian();
    cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll : 32" << endl;
    return 0;
}