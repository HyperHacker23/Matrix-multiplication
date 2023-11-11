//this program multiplies 2 matrices of any order
#include<iostream>
using namespace std;
int main()
{
//declaring basic variables
	int i,j,k,row1,row2,col1,col2;
//getting the rows and columns of matrix 1 and 2
	cout<<"Enter the number of rows for matrix 1: ";
	cin>>row1;
	cout<<"Enter the number of columns for matrix 1: ";
	cin>>col1;
	cout<<"Enter the number of rows for matrix 2: ";
	cin>>row2;
	cout<<"Enter the number of rows for matrix 2: ";
	cin>>col2;
	
//checking if the number of columns in the 1st matrix is equal to the rows in the 2nd matrix
if(col1==row2)
{
//declaring the arrays
	int a[row1][col1];
	int b[row2][col2];
	int c[col2][row1];
//getting the values of elements of array 1
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			cout<<"Enter the value for element of row "<<i+1<<" and column "<<j+1<<endl;
			cin>>a[i][j];
		}
	}
//getting the values of elements of array 2
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			cout<<"Enter the value for element of row "<<i+1<<" and column "<<j+1<<endl;
			cin>>b[i][j];
		}
	}
//filling all elements of the resultant array as zero
	for(i=0;i<col2;i++)
	{
		for(j=0;j<row1;j++)
		{
			c[i][j]=0;
		}
	}
//calculating the value of the resultant array
	for(i=0;i<col2;i++)
	{
		for(j=0;j<row1;j++)
		{
			for(k=0;k<col2;k++)
			{
				c[i][j] += a[i][k]*b[k][j];
				
			}
				
		}
	}
//displaying the resultant array
	cout<<"\nThe Resultant Matrix is: "<<endl;
	for(i=0;i<col2;i++)
	{
		for(j=0;j<row1;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
}
else
	cout<<"\nPlease learning basic arithmetics before using computers";

}
