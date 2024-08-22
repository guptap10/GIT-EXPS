# AIM 
To create array in c++ and doing basic operations on it.

# Software Used
VS Code

# Problem Statement

1.) Write a c++ code to make an array.

2.) Write a c++ code to make an array with elements in reverse order in which user entered.

3.) Write a c++ code to make do sum and average of array elements.

4.) Write a c++ code to find maximum and minimum element of an array.

5.) Write a c++ code to search the position of element, number of time it is occuring in an array.
 
 6.) Write a c++ program to take input from user. 

 7.) Write a c++ program to concatenate the string on c++. 

 8.)  Write a c++ program to reverse string. 

 9.)  Write a c++ program to check a palindrome.


# Theory
In C++, an array is a data structure that is used to store multiple values of similar data types in a contiguous memory location.

 C++ strings are sequences of characters stored in a char array. Strings are used to store words and text. They are also used to store data, such as numbers and other types of information. Strings in C++ can be defined either using the std::string class or the C-style character arrays.

# Program Codes

```javascript
//Array
#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter number of elements";
    cin >> n;
    int a[n];
    cout << " Enter array elements";
    for ( int i =0; i <n ; i++ )
    { cin >> a[i];
     
    }
       for (int i: a)
     {
        cout << " "<< i ;
     } 
    return 0;
}

//Reverse array
#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter number of elements";
    cin >> n;
    int a[n];
    cout << " Enter array elements";
    for ( int i =0; i <n ; i++ )
    { cin >> a[i];
     
    }
       for (j = n-1 ; j>=0; j--)
     {
        cout << " "<< a[j];
     } 
    return 0;
}

//Sum & average of array elements
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

//Maximum and minimum
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

//Search element
#include<iostream>
using namespace std;
int main()
{
     int n, i, j, s, c = 0, flag = 0;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}
cout << "Enter an element to be searched in an array: ";
    cin >> s;
for (j= 0 ; j<n; j++)
{
    if ( a[j]==s)
    {
cout<< "The element"<<" "<< s<< " " << "is present at location: "<<j<<endl;
c++;
flag =1;
    }
}

if( flag ==0)
{
    cout<< "The element"<< " "<< s << " "<< "is not present in the given array";
}
else
{
    cout << "The element" << " "<< s << " "<< "occurs"<< " "<< c << " "<< "times.";
}
return 0;
}
//USER INPUT
#include <iostream>
using namespace std;
int main()
{
    char s[]= "Prakhar";
    cout<<s<<endl;
    return 0;
}


//CONCATENATION
#include<iostream>
using namespace std;
int main() 
{
    string name("Prakhar");
    string surname("Gupta");
    name.append(surname);
    cout<<name<<endl;
}


//REVERSE STRING
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string a= "Prakhar";
reverse(a.begin(), a.end());
cout<<"reverse string is:"<<a<<endl;
return 0;
}

//PALINDROME
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() 
{
    string s1, s2;
    cout << "Enter a word to check";
    cin>>s1;
    s2=s1;
    reverse(s1.begin(), s1.end());
    if (s2==s1) 
    {
        cout<<"Yes! It is a palindrome";
    }
    else cout<<"No! It is not a palindrome";
}

```
# Output
1.) Array
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/fae5aa98-704e-4753-ba69-402f0b572d1b">

2.) Reverse array
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/48bdb148-5969-4bea-bb47-9e533ecd138e">

3.) Sum and average
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/321fc640-9850-4605-8789-0a30ae2eae67">

4.) Maximum and minimum
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/dd0c03ce-6907-4fe8-b3d0-ecf266d75ca9">

5.) Search element
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/972e7e59-8797-4533-822d-eb305e941134">
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/b91e215f-b874-49f0-a459-80b6c33bfbb7">

6.) USER INPUT
<img width="1201" alt="Screenshot 2024-08-16 at 11 42 49 PM" src="https://github.com/user-attachments/assets/c42331dc-c5ba-4531-8444-3d70e4197eb3">

7.) CONCATENATION
<img width="1201" alt="Screenshot 2024-08-16 at 11 43 11 PM" src="https://github.com/user-attachments/assets/fbc3ed9b-7ecb-40c1-90d8-260e3175a791">

8.) REVERSE STRING
<img width="1201" alt="Screenshot 2024-08-16 at 11 43 32 PM" src="https://github.com/user-attachments/assets/bdb64aff-f262-4b93-9fac-b3762a674fad">

9.) PALINDROME
<img width="1201" alt="Screenshot 2024-08-16 at 11 44 28 PM" src="https://github.com/user-attachments/assets/5a256397-1ce2-4367-a6b3-fc3cac34d07f">

# Conclusion

We learnt to create an array and operate it. 

We learnt to search element in the array and getting the sum and average of the elements.

We learnt to do concatenation of strings, making and checking palindromes, reversing the string in c++..
