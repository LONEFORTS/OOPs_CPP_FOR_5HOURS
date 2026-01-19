//rogram for friend function.
//Friend function is a function that can acces and has the right to access all private and protected members of the class.

#include<iostream>
using namespace std;

  class acc 
  {
    private: 
    int number;
    string name;
    float bal;
     friend void disp(acc ob1) 
    {
      cout<<"Account No: "<<ob1.number<<endl;
      cout<<"Name: "<<ob1.name<<endl;
      cout<<"Balance:"<<ob1.bal<<endl;
    } 
    
    public: 
     acc (int a, string b, float c) 
     {
      number = a;
      name = b;
      bal = c;
     }
  };
  
  int main() 
  {
    acc ob1(255,"Nimisha",2500);
    disp(ob1); //calling the friend function
    return 0;
  } 
  
  
  //following are some properties of friend function :
  //1.It cannot be called using the object of that class
  //2.it is not in the scope of class in which it has been declared.
  //3.it can be invoked directly like any other normal function
  //4.It cannot access data members directly.These are accessed by dot membership with object name.
  //5.It can be declared anywhere in the class without changing its original meaning
  //6.it has object as arguments.
  //7.Friend function cannot be inherited.