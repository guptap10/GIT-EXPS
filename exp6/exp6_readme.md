# Aim
To learn about for loop and while loop.

# Software Used
VS Code

# Problem Statement
1.) Write a c++ code for printing numbers using for loop.

2.) Write a c++ code for printing numbers using while loop.

3.) Write a c++ code for making a triangular star pattern.

4.) Write a c++ code for making a square shaped star pattern.

5.) Write a c++ code for making a pyramid of star.

6.) Write a c++ code to get sum of the numbers printed.

7.) Write a c++ code to make a Floyd triangle.

8.) Write a c++ code to make Floyd triangle of alphabets.

9.) Write a c++ code for password validation till correct password is entered.

#  Theory
In C++, for loop is an entry-controlled loop that is used to execute a block of code repeatedly for the specified range of values. Basically, for loop allows you to repeat a set of instructions for a specific number of iterations.

While Loop in C++ is used in situations where we do not know the exact number of iterations of the loop beforehand. The loop execution is terminated on the basis of the test condition. Loops in C++ come into use when we need to repeatedly execute a block of statements.

Floyd's triangle is a triangular array of natural numbers used in computer science education. It is named after Robert Floyd. It is defined by filling the rows of the triangle with consecutive numbers, starting with a 1 in the top left corner

# Program Codes
```javascript
 //Printing numbers using for loop.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the end value: ";
    cin >> num ;
    for(int i = 1; i<=num; i++)
    {
        cout<< "  " <<i;
    }
    return 0;
}

//Printing numbers using while loop.
#include<iostream>
using namespace std;
int main ()
{ int a,i=1;
    cout << "Enter end value: ";
    cin >> a;
    while( i <= a)
    { 
        cout<< " "<<i;
        i++;
    }
    return 0;

}

//Triangular star pattern
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}

//Square shaped star pattern.
#include<iostream>
using namespace std;
int main ()
{ int r;
    cout<< "Enter number of rows: ";
    cin>> r;
    for(int i = 0; i<=r-1; i++)
    { for (int j =0; j<=r-1; j++)
    {
        cout << "*" ;
    }
 cout << endl;
    }
    return 0;
}

//Pyramid of star
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for ( int k = row-1 ; k>i; k--)
    {
        cout << " ";
    }
        for(int j= 0 ; j<2*i+1; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}

//Sum of the numbers printed
#include<iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter last number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
        

    }
    cout << "Sum is: "<<sum;
    return 0;

}

//Floyd triangle
#include<iostream>
using namespace std;
int main()
{
    int row, a=1;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}

//Floyd triangle of alphabets
#include<iostream>
using namespace std;
int main()
{
    int row; 
    char a='A';
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}

//Password validation
#include<iostream>
#include<string>
using namespace std;
int main ()
{ string pass;
    do
{
 cout << "Enter a password: ";
 cin >> pass;
 if (pass=="SIT")
 {
    cout << "Sucess !!";
 }
 else
 {
    cout << "Try again"<<endl;
 }
} 
while (pass != "SIT");
return 0;
}
```
#Output
1.) Printing numbers using for loop.
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/a9ab7169-a320-4e6b-ab18-a7f3adc942d9">


2.) Printing numbers using while loop.
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/5a50393c-9285-49c4-9ca9-bd30eb802c8c">


3.) Triangular star pattern
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/be663f41-e442-4624-a9df-f60cdbc1830f">

4.) Square shaped star pattern
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/91e30fcc-825d-4399-8b16-77b52de91987">

5.) Pyramid of star
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/79ee897f-00ec-4341-9eee-d1daf730442c">

6.) Sum of the numbers printed
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/5d786db7-e5b1-493a-9179-b955fb4b2b74">

7.) Floyd triangle
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/252f1936-0318-491d-acc3-7c3fdb1e399c">

8.) Floyd triangle of alphabets
<img width="1201" alt="image" src="https://github.com/user-attachments/assets/c422b792-c58d-4ca8-b773-512afcae5ae0">


9.) Password validation
![image](https://github.com/user-attachments/assets/e41ba078-63d0-47bb-ab21-364d345872db)

# Conclusion
We learnt to use for loop, while loop and nested for loop.



