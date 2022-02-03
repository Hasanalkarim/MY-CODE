#include <iostream>

using namespace std;


int main () {


float x,y;

cin>>x;

cin>>y;

if ((x==0)&&(y==0)) {

    cout<<"origin";

}

else if (x==0) {


   cout<<"Y-axis";

}

else if (y==0) {

    cout<<"X-axis";

}

else if ((x>0)&&(y>0)) {


    cout<<"1st quadrant";

}

else if ((x<0)&&(y>0)) {

     cout<<"2nd quadrant";

}

else if ((x<0)&&(y<0)) {


     cout<<"3rd quadrant";

}


else {

     cout<<"4th quadrant";

}


 return 0;
}


