#include<iostream>
using namespace std ;
int main(){
    int num1=50;
    int num2=40;
    int num3=60;
    int add,sub,mul,div,mod;
    int max1=(num1>num2)?num1:num2;
    int max2=(num1 > num2) ? 
          (num1 > num3 ? num1 : num3) : 
          (num2 > num3 ? num2 : num3);
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    mod=num1%num2;
    cout<<"num1"<<num1;
    cout<<"num2"<<num2;
    cout<<"num3"<<num3;
    cout<<"arithmatic operator using num1 and num2"<<endl;
    cout<<"addition of two number is : "<<add<<endl;
    cout<<"substraction of two number is : "<<sub<<endl;
    cout<<"multiplication of two number is : "<<mul<<endl;
    cout<<"division of two number is : "<<div<<endl;
    cout<<"mmod of two number is : "<<mod<<endl;
    cout<<"max of num1 and num2 is : "<<max1<<endl;
    cout<<"max of num1,num2 and num3 is : "<<max2<<endl;
}