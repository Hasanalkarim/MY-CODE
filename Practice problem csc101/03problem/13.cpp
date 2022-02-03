#include <iostream>

using namespace std;


int main () {


int x ;

cin>>x;




if ((x%4==0) && (x%100!=0)) {

   cout<<"A leap year" ;

}

else if ((x%100==0)&&(x%400!=0)) {

     cout<<" not leap year" ;

}

else if (x%400==0) {

     cout<<"A leap year" ;
}


else {

   cout<<"not a leap year";

}


return 0;
}
