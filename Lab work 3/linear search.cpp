#include <iostream>
using namespace std;

class Math
{
public:
    int number_to_search;
    int no_of_elements;
    int arr[];
    Math()
    {
        
    }
    Math(int n)
    {
        this->no_of_elements = n;
    }

    void getItems()
    {
    	cout << "\n ## Enter the value of each item \n" << endl;

        for (int i = 0; i < no_of_elements; i++)
        {
        	cout << "\tlist["<<i<<"] => ";
            cin >> arr[i];
        }
    }

    void result()
    {
        int result = search();
        (result == -1)
            ? cout << "\n\n -> item is not present in list"
            : cout << "\n\n -> item is present at index " << result;
            
       
    }

private:
    int search()
    {
        cout << "\n\nEnter item to search in list : " << endl;
        cin >> number_to_search;
        int i;
        for (i = 0; i < no_of_elements; i++)
            if (arr[i] == number_to_search)
                return i;
        return -1;
    }
};

int main()
{

    int no_of_elements;
    cout << "\n\t****** PROGRAM FOR LINEAR SEARCH ******\n" << endl;
    cout << "\n\nEnter number of items in list : ";
    cin >> no_of_elements;
    Math m(no_of_elements);
    Math *arr = new Math[no_of_elements];
    m.getItems();
    m.result();
    cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll: 32" << endl;
    return 0;
}
