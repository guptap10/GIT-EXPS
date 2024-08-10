#include <iostream>
using namespace std;
int main()
{
  int s;
  cout<< "Enter your score";
  cin>>s;
  if(s>=90)
  {
    cout<<"Your grade is A"<<endl;
    cout<< "You are passed"<<endl;
  }
  else if(90>s>=80)
  {
    cout<<"Your grade is B"<<endl;
    cout<< "You are passed"<<endl;
  }
  else if(80>s>=70)
  {
    cout<<"Your grade is C"<<endl;
    cout<< "You are passed"<<endl;
  }
  else if(70>s>=60)
  {
    cout<<"Your grade is D"<<endl;
    cout<< "You are passed"<<endl;
  }
  else if(60>s>=50)
  {
    cout<<"Your grade is E"<<endl;
    cout<< "You are passed"<<endl;
  }
  else
  { cout<< "Failed";
  }
  return 0;
}