#include <iostream>
using namespace std;

class Handle{

    public:
    int a[10],b[10],m,n,i,j;  
    int ch;
    void takeFirstset(){
        cout<<"Enter the number of elements in first set:";
        cin>>m;
        cout<<"Enter the elements:";  
        for(i=0;i<m;i++)  
        {  
            cin>>a[i];  
        }  
    }

    void displayFirst(){   
        cout<<"Element of First set:";  
        for(i=0;i<m;i++)  
        {  
            cout<< a[i]<<endl;  

        }
    }

    void takeSecondset(){
        cout<<"Enter the number of elements in second set:";
        cin>>n;
        cout<<"Enter the elements:";  
        for(i=0;i<n;i++)  
        {  
            cin>>b[i];  
        }  
    }

    void displaySecond(){   
        cout<<"Element of Second set:";  
        for(i=0;i<n;i++)  
        {  
            cout<< b[i]<<endl;  

        }
    }

    void Union() {  
        int c[20],i,j,k=0,flag=0;  
        for(i=0;i<m;i++)  
        {  
            c[k]=a[i];  
            k++;  
        }  
        for(i=0;i<n;i++)  
        {  
            flag=0;  
            for(j=0;j<m;j++)  
            {  
                if(b[i]==c[j])  
                {  
                    flag=1;  
                    break;  
                }  
            }  
            if(flag==0)  
            {  
                c[k]=b[i];  
                k++;  
            }  

        }  

        cout<<"\nElement of Union of set \n";  
            for(i=0;i<k;i++)  
            {  
            cout<<c[i]<<endl;  
            }  
        }  

    void Intersection(){  

        int c[20],i,j,k=0,flag=0;  
            for(i=0;i<m;i++){  
                flag=0;  
                for(j=0;j<n;j++){  
                    if(a[i]==b[j]){  
                        flag=1;  
                        break;  
                    }  
                }  
            if(flag==1){  
                c[k]=a[i];
                k++;  
            }  
        }  
        if(k==0){ 
        cout<<"\n\nResultant set is null set!\n"; 
        }else{ 
        cout<<"\n\nElement of intersection of set:\n";  
            for(i=0;i<k;i++){  
                cout<<c[i]<<endl;  
            }  
        } 
    } 
};

int main(){
    Handle h;
    h.takeFirstset();
    h.takeSecondset();
    cout<<"____Displaying_________"<<endl;
    h.displayFirst();
    h.displaySecond();
    cout<<"_____calculating_____"<<endl;
    h.Union();
    h.Intersection();
    cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll : 32" << endl;
    return 0;
}