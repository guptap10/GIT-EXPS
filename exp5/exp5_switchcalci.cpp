//PRAKHAR GUPTA
//PRN: 23070123101
#include<iostream>
using namespace std;
int main()
{
    float a,b,c ;

    int choice;
    cout << "Calculator"<<endl;
    cout << "1: Addition"<<endl;
    cout << "2: Subtraction"<<endl;
    cout << "3: Multiplication"<<endl;
    cout << "4: Division"<<endl;
    cout<<"Enter operation choice: ";
    cin>>choice;
switch(choice)
{
    case 1 :
    { float c;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a+b;
    cout<<"sum is = "<<c;
    } 
    break;
    case 2 :
    {
        float c;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a-b;
    cout<<"difference is = "<<c;
    }
    break;
case 3 :
{ float c;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a*b;
    cout<<"product is = "<<c;
}
break;
case 4 :

{ float c;
   cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a/b;
    cout<<"quotient is = "<<c;
    }
    break ;
}
return 0;
}