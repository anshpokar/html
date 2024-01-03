#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float P, R, T, N, CP,temp;
    cout << "enter the following details to print Compound Interest" << endl;
    cout << "initial principal balance=";
    cin >> P;
    cout << "rate of interest per annum=";
    cin >> R;
    cout << "number of time interest applied per time period=";
    cin >> N;
    cout << "Time=";
    cin >> T;
    temp=(100+R)/100;
    CP=P*(pow(temp,T));
     cout << "Compound Interest is =" << CP;
}