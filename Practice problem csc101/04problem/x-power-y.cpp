#include <iostream>
using namespace std;

int main () {

int i ;

float num,p ,power;

cout<<"enter number ";
cin>>num;


cout<<"enter power ";
cin>>p;


power=1;
for(i=0; i<p; i++){

power=power*num;

}

cout<<num<<"^"<<p<<" is "<<power<<endl;


return 0;
}
