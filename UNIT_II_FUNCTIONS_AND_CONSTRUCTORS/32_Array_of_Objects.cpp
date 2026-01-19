#include<iostream>
using namespace std;

  class student 
 {
    int roll; char name[20];
    public: 
    void getdata();
    void putdata();
 }; 
   void student::getdata() 
   {
     cout<<"Enter Roll: ";
     cin>>roll;
     cout<<"Enter Name: ";
     cin>>name;
   } 
   
   void student:: putdata() 
   {
    cout << "roll: "<<roll << endl;
    cout << "name: " <<name<< endl; 
   }
   
   int main()
   {
     int I;
     student s[3];
     for(I=0;I<3;I++)
     {
      cout<<I+1<<"Student Information:"<<endl;
      s[I].getdata();
     } 
     for (I=0;I<3;I++) 
     {
       s[I].putdata();
     } 
     return 0;
   }