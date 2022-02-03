//9.write a program that swap the value of two variable without using 3rd variable
#include <iostream>
using namespace std;

int main () {

  int x, y;

  cout<<"inter value x "<<endl ;
  cin>>x;

  cout<<"inter value Y "<<endl;
  cin>>y;

  cout<<endl;

  cout<<" SWAPING....... "<<endl;


  x=x+y;

  y=x-y; //x with total value - y

  x=x-y; //x with total value - previous y that contain x



  cout<<" value  of x "<<x<<endl;

  cout<<" value  of y "<<y<<endl;

  return 0;
}
