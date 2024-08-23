#include<iostream>
using namespace std;
int main()

{ int i,j, r1, c1, sum=0, sum2=0;
 cout<<"Enter number of rows and cloumns of first matrix: ";
cin>>r1>>c1;
int mat1[r1][c1];

if(r1!=c1)
{
    cout<<"ONLY SQUARE MATRICES ARE TO BE ENTERED!"<<endl;
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