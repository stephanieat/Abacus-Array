//Stephanie Thompson
//The Abacus Array - CS231
//Write functions that determine the max, min, product, and sum of user entered lists

#include <iostream>
using namespace std;
//Min and max function

void list_min_and_max(){
cout << "Welcome to the Abacus Array!"<< endl;
cout <<"\nI will ask you to enter 10 integers and then tell you the minimum and maximum values." <<endl;
int num[10];
int min = 999999999;
int max = -999999999;
//Get user input
for (int i = 0; i < 10; i++){
cout << " Please enter " << (i+1) << " of ten numbers: ";
cin >> num[i] ;
}
cout << "Your numbers are : " <<num[0]<< ", " <<num[1]<< ", " <<num[2]<< ", " <<num[3]<< ", " <<num[4]<< ", " <<num[5]<< ", " <<num[6]<< ", " <<num[7]<< ", " <<num[8]<< ", " <<num[9]<< endl; 

//Find min and max
for (int i = 0; i < 10; i ++)
{
	if (min > num[i])
	{min = num[i] ;
	}
	if (max < num[i]){
		max = num[i];
	}
}
cout << "The minimum is : " << min << endl;
cout << "The maximim us : " << max << endl;

}

//List sums and products
void list_product_sum(){
cout <<"\nNow, I will you ask you to enter a total of 20 integers. The first 10 will be list A and the next 10 will make up list B. I will then give you the sum and product of list A and B in list C and D, respectively." << endl;
int A[10];
int B[10];

//Get user input
for (int i = 0; i < 10; i++){
cout << "For list A, please enter " << (i+1) << " of 10 numbers. : ";
cin >> A[i];
}
for (int i = 0; i <10; i++){
cout << "For list B, please enter " << (i+1) << " of 10 numbers. : ";
cin >> B[i];
}
//Find sum and product of lists
int C[10];
int D[10];
for ( int i= 0; i <10 ; i++){
C[i] = {A[i] + B[i]};
D[i]= {A[i] * B[i]};
}
cout << "A = {" << A[0]<< ", " <<A[1]<< ", " <<A[2]<< ", " <<A[3]<< ", " <<A[4]<< ", " <<A[5]<< ", " <<A[6]<< ", " <<A[7]<< ", " <<A[8]<< ", " <<A[9]<< "}" << endl;
cout << "B = {" << B[0]<< ", " <<B[1]<< ", " <<B[2]<< ", " <<B[3]<< ", " <<B[4]<< ", " <<B[5]<< ", " <<B[6]<< ", " <<B[7]<< ", " <<B[8]<< ", " <<B[9]<< "}" << endl;
cout << "C = {" << C[0]<< ", " <<C[1]<< ", " <<C[2]<< ", " <<C[3]<< ", " <<C[4]<< ", " <<C[5]<< ", " <<C[6]<< ", " <<C[7]<< ", " <<C[8]<< ", " <<C[9]<< "}" << endl;
cout << "D = {" << D[0]<< ", " <<D[1]<< ", " <<D[2]<< ", " <<D[3]<< ", " <<D[4]<< ", " <<D[5]<< ", " <<D[6]<< ", " <<D[7]<< ", " <<D[8]<< ", " <<D[9]<< "}" << endl;

}


int main(){
list_min_and_max();
list_product_sum();
}
