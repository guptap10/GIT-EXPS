# AIM
To learn about costructor and destroctor in c++.

# Software Used
VS Code

# Problem Statement
1.) Write a c++ program to define constructor.

# Theory

Constructor: 
A constructor is a member function of a class that has the same name as the class name. It helps to initialize the object of a class. It can either accept the arguments or not. It is used to allocate the memory to an object of the class. It is called whenever an instance of the class is created. It can be defined manually with arguments or without arguments. There can be many constructors in a class. It can be overloaded but it can not be inherited or virtual. 

Destructor: 
Like a constructor, Destructor is also a member function of a class that has the same name as the class name preceded by a tilde(~) operator. It helps to deallocate the memory of an object. It is called while the object of the class is freed or deleted. In a class, there is always a single destructor without any parameters so it can’t be overloaded. It is always called in the reverse order of the constructor. if a class is inherited by another class and both the classes have a destructor then the destructor of the child class is called first, followed by the destructor of the parent or base class. 

# Problem Codes

```javascript
//PRAKHAR GUPTA
//23070123101

//DEFINE CONSTRUCTOR.
#include<iostream>
using namespace std;
class MyClass{
    public:
    string a;
MyClass(){

    cout<< "Enter your name: "<<endl;
    cin>>a;
    cout<<"Hello "<<a<< " from constructor !!"<<endl;

}
};
int main(){
    MyClass obj;
    return 0;
}
```

# Output

1.) DEFINE CONSTRUCTOR

<img width="1177" alt="image" src="https://github.com/user-attachments/assets/e667ce30-c3d0-430f-8d55-5936e30bf19f">


# Conclusion
 We learnt to define constructor.
