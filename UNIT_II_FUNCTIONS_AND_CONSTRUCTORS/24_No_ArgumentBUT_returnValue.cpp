//program for no arguments but return value

#include<iostream>
using namespace std;
//function declaration: 
bool check_even_odd();

int main(){
//function call
bool c=check_even_odd();
if(c){
cout<<"Number is even number"<<endl;

} 
else {
cout<<"Number is odd number"<<endl;
}
return 0;
} 

bool check_even_odd(){ //function definition 

int num; 
cout<<"Enter a Integer to check: "<<endl;
cin>>num;
if (num%2==0){
return(true);
} 
else{
return(false);
} 
}