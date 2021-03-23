 #include <iostream>
 using namespace std;

int main(){

	//define a 2x2 matrix
	int M[2][2] ={
	{
		1,0,
	},
	{
		0,1
	},
	};
	//define a 2x2 matrix
	int B[2][2] ={
	{
		1,0
	},
	{
		1,1
	}
	};

	int BOOLEAN_PRODUCT [2][2]; // output matrix
	/*----------------2x2----------
	| R - row, C - column
	|R1C1  - row1colum1
	------------------------------*/

BOOLEAN_PRODUCT[0][0] = (M[0][0] * B[0][0])+ (M[0][1] * B[1][0]) ;//R1C!
BOOLEAN_PRODUCT[0][1] = (M[0][0] * B[0][1])+ (M[0][1] * B[1][1]) ;//R1C2
BOOLEAN_PRODUCT[1][0] = (M[1][0] * B[0][0])+ (M[1][1] * B[1][0]) ;//R2C1
BOOLEAN_PRODUCT[1][1] = (M[1][0] * B[0][1])+ (M[1][1] * B[1][1]) ;//R2C2

    cout<<"Boolean product of two 2x2 matrices:\n";
	for(int i=0; i<2; i++){

		for(int j=0; j<2; j++){

			cout<<BOOLEAN_PRODUCT[i][j];
			cout<<"\t";
		}
		cout<<"\n";
	}
    cout << "\n\nCode by: Sudeep Mishra" << endl;
    cout << "Roll : 32" << endl;

}
