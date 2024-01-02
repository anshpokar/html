#include <iostream>
using namespace std ;
int main(){
    int num1;
    int num2;
    cout<<"enter the num1:";
    cin>>num1;
    cout<<"enter the num2:";
    cin>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"num1:"<<num1<<endl;
    cout<<"num2:"<<num2;
}
