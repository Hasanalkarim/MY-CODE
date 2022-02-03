//5.write a program that takes a temperature input in Fahrenheit and
//and display the temp in Celsius and  in Kelvin


#include <iostream>
using namespace std;

int main () {

 float f, c, k;

 cout<<"enter Fahrenheit "<<endl;
 cin>>f;



 c=(5*(f-32))/9;

 k=c+273.15;


 cout<<"Celsius is "<<c<<endl;

  cout<<"Kelvin  is "<<k<<endl;
}
