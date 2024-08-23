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
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d , i , j ,k , e, f;
    cout<< " Enter matrix-1 rows: ";
    cin>> a ;
    cout<<" Enter matrix-1 columns: ";
    cin>> b;
    cout<< " Enter matrix-2 rows: ";
    cin>> c ;
    cout<<" Enter matrix-2 columns: ";
    cin>> d;

    int mat1[a][b];
    int mat2[c][d];
    int add [a][b];
    int mul [a][d];
    
 
//Taking elements of the matrix   
for (i=0 ; i < a ; i++)
    {
        for(j = 0 ; j < b ; j++)
        {
            cout<< "Enter elements ("<<i<< "," <<j<<"): "  ;
            cin>>mat1[i][j];
        }
    }


    for (i=0 ; i < c ; i++)
    {
        for(j = 0 ; j < d ; j++)
        {
            cout<< "Enter elements ("<<i<< "," <<j<<"): "  ;
            cin>>mat2[i][j];
        }
    }
//Checking condition for addition of matrices using if-else loop.
    if ( a !=c || b!=d)
    {
        cout<< "Matrix cannot be added as dimension do not match."<<endl;
    }
    
else
{for (i=0 ; i < a ; i++)
    {
        for(j = 0 ; j < b ; j++)
        {
            add[i][j] = mat1[i][j] + mat2 [i][j];

        }
    }
//Printing the sum of matrices.
cout<<"ADDITION OF MATRIX: "<<endl;
for (i=0 ; i< a ; i++)
{
    for(j = 0; j< b ; j++ )
    { 
        cout<< " " <<add[i][j];
    }
    cout<<endl;
}}
//Checking condition for multiplication of matrices.
    if( b != c)
{
    cout<< "Matrices cannot be multiplied as dimensions do not match." <<endl;
    return 1;
}
for(i = 0; i<a ; i++)
{
    for( j = 0; j<d ; j++)
    {
        mul[i][j] = 0;
        for( k=0; k<b ; k++)
        {
            mul[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}
//Printing the product of matrices.
cout << "MULTIPLICATION OF MATRIX: "<<endl;
for (i=0 ; i< a ; i++)
{
    for(j = 0; j<d ; j++ )
    { 
        cout<< " " <<mul[i][j];
    }
    cout<<endl;
}
}



//ADDITION OF DIAGONAL ELEMENTS
#include<iostream>
using namespace std;
int main()

{ int i,j, r1, c1, sum=0, sum2=0;
 cout<<"Enter number of rows and cloumns of matrix: ";
cin>>r1>>c1;
int mat1[r1][c1];
//Checking if square matrix or not
if(r1!=c1)
{
    cout<<"ONLY SQUARE MATRIX ARE TO BE ENTERED!"<<endl;
}
else
{
for(i=0; i<r1; i++)
{
    for (j=0 ; j<c1 ; j++)
    {
        cout<<"Enter elements ("<<i<< "," <<j<<"): ";
        cin>>mat1[i][j];
    }
}


for(i=0; i<r1; i++)
{
    for (j=0 ; j<c1 ; j++)
    { if(i==j)
    {
        sum +=mat1[i][j];
    }
    if (i+j == r1-1)
    sum2 += mat1[i][j];
    }
    }
    cout<< "Sum of diagoal elements is: "<<sum<<endl;
    cout<<"Sum of diagonal elements is: "<<sum2<<endl;
}

}

```
# Output
1.) MATRIX FROM USER
<img width="1077" alt="image" src="https://github.com/user-attachments/assets/c099154a-f674-4e55-8808-4731defb532d">

2.) MATRIX ADDITION AND MULTIPLICATION
<img width="1042" alt="image" src="https://github.com/user-attachments/assets/7891c636-392b-4046-8068-4b3af997b4cf">
<img width="1042" alt="image" src="https://github.com/user-attachments/assets/cb9a118e-a2dc-4b3e-97ce-b859536b71b5">
<img width="1171" alt="image" src="https://github.com/user-attachments/assets/f41564fe-65b0-465e-a5e5-897ff235524f">
<img width="1077" alt="image" src="https://github.com/user-attachments/assets/ff84678a-8a11-4a45-a08a-ead09e993974">

3.) ADDITION OF DIAGONAL ELEMENTS
<img width="1180" alt="image" src="https://github.com/user-attachments/assets/8d153a92-8a30-44a2-a67a-5bb142ceb06c">
<img width="1180" alt="image" src="https://github.com/user-attachments/assets/e50b2e0d-9ec5-4444-8100-36d575c71cc9">






