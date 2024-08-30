# AIM
To use pointers and access elements of array and find address of different data types.

# Software Used
VS Code

# Problem Statement

1.) Write a c++ program to initialize pointers of different data types and print the required values.

2.) Write a c++ program to access elements of array using pointer.

3.) Write a c++ program to access elements of array without using pointer variable.

# Theory

Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers. 

# Problem Codes

```javascript
 //PRAKHAR GUPTA
 //23070123101

 //INITIALIZE POINTERS OF DIFFERENT DATA TYPES

//INT
 #include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr=&a;
   cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}

//FLOAT
 #include <iostream>
using namespace std;
int main()
{
    float a = 'A';
    float *ptr;
    ptr=&a;
     cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}

//CHAR
#include<iostream>
using namespace std;
int main()
{
    char a = 'c'; 
    

    char *ptr;

    ptr = &a;

    cout<< "The value pointed by *ptr is"<<*ptr << endl;
    cout << "The value in b is" <<a << endl;
    cout << "The value in pointer variable ptr is"<<(void*)ptr << endl;

    cout << "the address of variable b is "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;

    
}


//ACCESS ELEMENTS OF ARRAY USING POINTER.

#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 1,2,4,8,9};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*ptr << endl;
        ptr ++;

    }
}

//ACCESS ELEMENTS OF ARRAY WITHOUT USING POINTER VARIABLE.

#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 1,2,4,8,9};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*(a+i) << endl;
        ptr ++;

    }
}


```

# Output

1.) INITIALIZE POINTERS OF DIFFERENT DATA TYPES

   A.) INT
   <img width="1069" alt="image" src="https://github.com/user-attachments/assets/85bb5888-70aa-4182-bfe6-774a1a2c2c74">

     
   B.) FLOAT
   <img width="1069" alt="image" src="https://github.com/user-attachments/assets/de2a9a12-4f37-4f49-96c1-1e7f5ace93c1">


   C.) CHAR
   <img width="1069" alt="image" src="https://github.com/user-attachments/assets/8bbd5e69-1bdd-40fb-976f-623e9ab13b29">


2.) ACCESS ELEMENTS OF ARRAY USING POINTER
<img width="1069" alt="image" src="https://github.com/user-attachments/assets/a5a8abcc-5ac1-4fd7-a451-5f908a7dcdba">


3.) ACCESS ELEMENTS OF ARRAY WITHOUT USING POINTER VARIABLE
<img width="1069" alt="image" src="https://github.com/user-attachments/assets/da270462-fe1b-4325-ad44-077bb34b41e5">

# Conclusion

We learnt to initialize pointers of different data types.

We learnt to access elements of array using pointers and without pointers variable.



