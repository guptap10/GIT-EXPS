# AIM
To learn about recursion in c++.

# Problem Statement
1.) Write a c++ program to get factorial of a number using recursion.

# Theory

Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.


# Problem Codes
```javascript
//PRAKHAR GUPTA
//23070123101

//FACTORIAL
# include<iostream>
using namespace std;
 int factorial (int n)
{ if ( n == 0)
{
    return 1;
}
else 
{
    return n*factorial(n-1);
    }
    }
    int main()
    {  int num;
       cout<<"Enter a number: "<<endl;
       cin>>num;

       cout<<"The factorial of "<<num<<" is: "<< factorial(num)<<endl;
       return 0;
    }
```

# Output
1.) FACTORIAL
<img width="1079" alt="image" src="https://github.com/user-attachments/assets/d2b7dbd1-885a-4e77-bba0-2e80dbf159ce">




# Conclusion

