# AIM
To learn about costructor and destroctor in c++.

# Software Used
VS Code

# Problem Statement
1.) Write a c++ program to define constructor.

2.) Write a c++ program using parameterized constructior.

3.) Write a c++ program using copy constructor.

4.) Write a c++ program for default argument.

5.) Write a c++ program to calculate area of rectangle using class.

6.) Write a c++ program using deconstructor.



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

//PARAMETERIZED CONSTRUCTOR
#include<iostream>
using namespace std;
class MyClass{
    public:
    int c;
    MyClass(int val)
{
    c = val*val;
    cout<<"Square of "<<val<<" is: "<<c<<endl;
    
}
};
int main() {
    MyClass obj(9);
    return 0;
}


//COPY CONSTRUCTOR
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value;
    public:
    MyClass(int val){
        value = val;
        cout << "Pink Floyd were established in the year "<<value<<endl;

    }
    MyClass(const MyClass &obj){
        value = obj.value;
        cout<<"Second Indo-Pak war happened in the year "<<value<<endl;
    }
};
int main(){
    MyClass obj1(1965);
    MyClass obj2 = obj1 ;
    return 0;
    }

//DEFAULT ARGUMENT
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value1;
    int value2;
    string str1;
    public:
    
    MyClass( int val1= 0, int val2= 0, string a = "none"){
        str1 = a;
        value1= val1;
        value2 = val2;
        cout<<str1<<" played "<<value1<<" ODI matches."<<endl;
        cout<<"He scored "<< value2 << " centuries."<<endl;

    }
};
int main()
{
   
    MyClass obj1(463,49, "Sachin");
    return 0;
    }

//AREA OF RECTANGLE
#include<iostream>
using namespace std;
class MyClass{
    private:
    int l;
    int b;



    public:
int s,w;
void getinput()
         { 
            cout<<"Enter length and breadth"<<endl;
            cin>>s>>w;
         }

         void display()
         { int a;
         l=s;
         b=w;
    
            a = l*b;
         cout<<"Area of rectangle is: "<< a<< endl;
         }
};
int main(){
    
    MyClass obj1;
    obj1.getinput();
    obj1.display();

    return 0;

//DECONSTURCTOR
#include<iostream>
using namespace std;
class MyClass{
    public:
    ~MyClass(){
        cout<<"Destructor called! "<< endl;
    }
    MyClass(){
        cout<<"Constructor called!"<<endl;

    }
    };
    int main(){
        MyClass obj;
        return 0;
    }
}
```

# Output

1.) DEFINE CONSTRUCTOR

<img width="1177" alt="image" src="https://github.com/user-attachments/assets/e667ce30-c3d0-430f-8d55-5936e30bf19f">

2.) PARAMETERIZED CONSTRUCTOR

<img width="1074" alt="image" src="https://github.com/user-attachments/assets/92480efc-8cdb-4695-8c4a-42417dec4f3f">

3.) COPY CONSTRUCTOR
<img width="1074" alt="image" src="https://github.com/user-attachments/assets/90dde925-0de5-4622-808f-0dff89b00a1b">

4.) DEFAULT ARGUMENT

<img width="1074" alt="image" src="https://github.com/user-attachments/assets/1435ced6-c11e-4d9d-b09e-3085aac487b0">

5.) AREA OF RECTANGLE
<img width="1091" alt="image" src="https://github.com/user-attachments/assets/0846d0b4-31cc-47b5-97dc-6b013072c485">

6.) DECONSTRUCTOR
<img width="1091" alt="image" src="https://github.com/user-attachments/assets/c2596fc0-fd2d-41d6-a4d2-bbda6c38ac79">




# Conclusion
 We learnt to define constructor, prameterized constructor, copy constructor, default arguments and deconsturctor.
