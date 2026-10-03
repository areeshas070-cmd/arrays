#include<iostream>
using namespace std;
int main()
{
	int A[3][3], B[3][3], S[3][3] ={0};
	cout<<"Enter values of matrix A: "<<endl;
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	cin>>A[i][j];
	cout<<"Enter values of matrix B: "<<endl;
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	cin>>B[i][j];
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	for(int k=0; k<3; k++)
	S[i][j]+= A[i][k]*B[k][j];
	cout<<"Result: "<<endl;
	for(int i=0; i<3; i++)
	{
	 for(int j=0; j<3; j++)
	cout<<S[i][j]<<" ";
	cout<<endl;
}
}
