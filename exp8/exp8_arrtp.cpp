#include<iostream>
using namespace std;
int main()
{
    int r,c , i , j;
    cout<< " Enter number of rows: ";
    cin>> r;
    cout<<" Enter number of columns: ";
    cin>> c;
    int arr[r][c], arr2[c][r];
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
        cout<< "  "<< arr[i][j];
    }
    cout<<endl;
}
for (i=0 ; i<c ; i++)
{
    for(j = 0; j< r ; j++ )
    { 
        arr2[i][j]= arr[j][i];
    }

    
}
cout<<endl;
for (i=0 ; i<c ; i++)
{
    for(j = 0; j< r ; j++ )
    { 
        cout<< " "<< arr2[i][j];
    }
    cout<<endl;
}

}