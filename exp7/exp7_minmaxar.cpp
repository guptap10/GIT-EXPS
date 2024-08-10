#include<iostream>
using namespace std;
int main()
{
     int n, i, j, max, min;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}
max = a[0];
min = a[0];
for (j= 1 ; j<n; j++)
{
 if (max<a[j])

 {
    max = a [j];
 }
 if (min > a[j])
 {
    min = a[j];
 }
}
cout <<"The maximum element in the given array is: "<<max<<endl;
cout << " The minimun element in the array is: "<<min<<endl;
return 0;

}
