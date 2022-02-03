#include <iostream>

using namespace std;

int main () {


int first, second, i;


cout<<"first number ";
cin>>first;

cout<<"second number ";
cin>>second;


if (first<second) { //choosing the large number(as first)

   i=first;
   first=second;
   second=i;
}

for(i=1;   ;  i++){  //no condition means infinti loop

      if((first*i)%second==0){//finding i for divisible


          break; //when found i it will break

      }


}
cout<<"LCM is "<<first*i;






return 0;
}
