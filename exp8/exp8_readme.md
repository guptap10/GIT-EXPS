# AIM
To create a matrix by taking inputs from user and doing operations on it.

# Software Used
VS Code

# Problem Statement
1.) To make a matrix by taking number of rows and column from user.

2.) To make a matrix by taking number of rows and column from user and do their addition and multiplication.

# Theory
An array is a type of data structure used to store the collection of the same data type items held at contiguous memory locations. Arrays can be one-dimensional or multidimensional based on the number of directions in which the array can grow. In this article, we will study multidimensional arrays such as two-dimensional arrays and three-dimensional arrays.

To multiply two matrices, the number of columns of first matrix should be equal to the number of rows to second matrix. This program displays the error until the number of columns of first matrix is equal to the number of rows of second matrix.

Matrix addition is a basic C++ procedure that merges two matrices to create a new matrix. Matrices are two-dimensional numerical arrays with rows and columns.

# Program Codes
```javascript
//PRAKHAR GUPTA
//23070123101

//MATRIX FROM USER
#include<iostream>
using namespace std;
int main()
{
    int r,c , i , j;
    cout<< " Enter number of rows: ";
    cin>> r ;
    cout<<" Enter number of columns: ";
    cin>> c;
    int arr[r][c];
    for (i=0 ; i < r ; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
            cout<< "Enter elements ("<<i<< "," <<j<<"): "  ;
            cin>>arr[i][j];
        }
    }
for (i=0 ; i<r ; i++)
{
    for(j = 0; j< c ; j++ )
    { 
        cout<< " "<< arr[i][j];
    }
    cout<<endl;
}

}

//MATRIX ADDITION & MULTIPLICATION


```
# Output
1.) MATRIX FROM USER

2.) MATRIX ADDITION AND MULTIPLICATION

