# AIM

To learn pointer operations in c++.

# Software Used

VS code

# Problem Statement

1.) Write a c++ program to swap the numbers using call by value.

2.) Write a c++ program to swap the numbers using call by reference.

# Theory

Call by value :-

When a function is called, new elements are created on the stack memory to store the essential information about the functions as well as allocated memory space for parameters and the return value.

Call by reference :-

The call by reference method of passing arguments to a function copies the reference of an argument into the formal parameter. Inside the function, the reference is used to access the actual argument used in the call. This means that changes made to the parameter affect the passed argument.

# Problem Codes

```javascript
//PRAKHAR GUPTA
//23070123101

//CALL BY VALUE
 #include <iostream>
using namespace std;
 void swap(int a,int b)
 
{
    int c;
    c=a;
    a=b;
    b=c;
   cout<<"Inside swabByValue function: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
int main()
 
{ int a=2,b=7;
cout<<"Before swabByValue: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
swap(a,b);
cout<<"After swapByValue: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}

//CALL BY REFERENCE

 #include <iostream>
using namespace std;
 void swap(int *a,int* b)
 
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
  cout<<"Inside swabByReference function: "<<"a = "<< *a<<" , "<<"b = "<< *b<<endl;
    
}
 int main()
 
{ int a=2,b=7;
cout<<"Before swabByReference: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
swap(&a,&b); 
cout<<"After swapByReference: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}

```

# Output

1.) CALL BY VALUE
![image](https://github.com/user-attachments/assets/ddcbb365-d96a-4e39-b32d-985cb5e7bb99)

2.) CALL BY REFERENCE
<img width="1069" alt="image" src="https://github.com/user-attachments/assets/5820ad3a-218f-4209-867a-b76615690f61">

# Conclusion

We learnt to swap the numbers using call by value and call by reference.
