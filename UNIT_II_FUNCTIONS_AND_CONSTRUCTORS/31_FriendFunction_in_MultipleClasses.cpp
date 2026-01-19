//Following program dmeomstraes using friend function in more than two class.
/*
- an independent functon belonging to none of the class can be declared as the friend function of more than one class.
-Here, the  friend function can access the private data members of all the class, to which it is declared as a friend.
- A friend function can be friendly to two or more classes. the friend function does not belong to any clas, so it can be used to access data of two or more classes as in the following program.
- As friend functions are not members of any class, these should not call using the dot  operator. */


#include<iostream>
using namespace std;

//forward declaration of classes;

 class classB;
 class classA 
 {
   int numA;
   friend int add(classA,classB); //friend function declaration.
   public: 
    void accept(int a) 
    {
      numA=a;
    } 
 };
 
 class classB 
 {
   private:
    int numB; 
    public:
    //friend function declaration.
    friend int add(classA,classB);
    void accept2( int B)
    {
     numB=B;
    }
 }; 
 
  //access members of both classes;
  
  int add(classA objA,classB objB) 
  {
   return(objA.numA + objB.numB);
  } 
  int main() 
  {
   classA objA;
   classB objB;
   
   objA.accept(2);
   objB.accept2(26);
   cout<<"Sum:"<<add(objA,objB);
   return 0;
  }

