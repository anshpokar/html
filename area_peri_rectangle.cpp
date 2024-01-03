#include <iostream>
using namespace std;
int main(){
    int length,width,area,perimeter;
    cout<<"lenght of rectangle=";
    cin>>length;
    cout<<"width of rectangle=";
    cin>>width;
    area=length*width;
    perimeter=(length+width)*2;
    cout<<"area of rectangle="<<area<<endl;
    cout<<"perimeter of rectangle="<<perimeter;
}