//10.write a program that takes a 3-digit positive number from the user
//and print reserved


#include <iostream>

using namespace std;


int main() {


 int x, y=0, r;

 cout<<"inter value"<<endl;
 cin>>x;

  for ( ;x!=0; ) {

    r=x%10;
    x=x/10;
    cout<<r;
}

   cout<<"reversed"<<y;

  return 0;

}
