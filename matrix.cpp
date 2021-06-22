#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout <<"Welcome to this Cool Matrix Multiplication Program"<< endl;
	int A[10][10], B[10][10], MULT[10][10];
	int matrix_size=0;

	cout <<"What size do you want your matrix to be?(issa square matix)"<<endl;
	cin >> matrix_size;

	for(int i=0; i < matrix_size; i++)
	for(int j=0; j < matrix_size; j++)
	{
		cout <<"Enter Value for Position A"<< "["<<i+1<<"]["<<j+1<<"]"<<":"<< endl;
		cin >> A[i][j];
	} 

	for(int i=0; i < matrix_size; ++i)
        for(int j=0; j < matrix_size; ++j)
	{
		cout <<"Enter Value for Position B"<< "["<<i+1<<"]["<<j+1<<"]"<<":"<< endl;
		cin >> B[i][j];
	}

	for(int i=0; i < matrix_size; ++i)
	for(int j=0; j < matrix_size; ++j)
	{
		MULT[i][j]=0; 
	}

 	for(int i=0; i < matrix_size; i++)
        for(int j=0; j < matrix_size; j++)
	for(int k=0; k < matrix_size; k++)
	{
		MULT[i][j]= MULT[i][j] + A[i][k] * B[k][j];
	}

	for(int i=0; i < matrix_size; i++)
	for(int j=0; j < matrix_size; j++)
	{
		cout <<"C"<<"["<<i+1<< "]["<< j+1<< "]" <<"="<< MULT[i][j] << endl;
	}	
	return 0;
	
}
