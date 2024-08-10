#include<iostream>
using namespace std;
int main()
{
     int n, i, j;
     float avg, s = 0;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}

for (j= 0 ; j<n; j++)
{
    s = a[j]+s;
}
avg = s/n;
cout << "The sum of elements of the givne array is: "<<s<<endl;
cout << "The average of the given array is: "<< avg<<endl;

return 0;
}