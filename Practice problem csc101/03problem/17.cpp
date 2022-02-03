//RIGHT ANGLE


#include <iostream>

using namespace std ;

int main () {


float x,y,z;

cin>>x;

cin>>y;

cin>>z;

if (x==y) {

    cout<<"not right angle";
}

else if (y==z) {

    cout<<"not right angle";

}







else if (x>y) {
        if (x>z) {

               x=(x*x);
               y=(y*y);
               z=(z*z);
               if(x==y+z) {

                cout<<"right angle";

               }
              else {

                cout<<"not right angle";
              }




        }
        else {

               x=(x*x);
               y=(y*y);
               z=(z*z);

               if (z=x+y) {

                 cout<<"right angle";

               }
               else {

                cout<<"not right angle";
               }



        }


}


else {
      if (y>z) {

               x=(x*x);
               y=(y*y);
               z=(z*z);
               if (y=x+z) {

                  cout<<"right angle";

               }
              else {


                cout<<"not right angle";
              }

      }

      else {

            x=(x*x);
               y=(y*y);
               z=(z*z);
               if (z=x+y) {

                  cout<<"right angle";

               }
              else {


                cout<<"not right angle";
              }


      }

}




return 0;

}
