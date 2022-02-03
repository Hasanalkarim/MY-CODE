#include <iostream>

using namespace std;


int main () {


 int x;

 float pie=3.1416,line1, line2,result,radious;

cout<<"1. Area of a circle"<<endl;

cout<<"2. Area of a rectangle"<<endl;

cout<<"3. Area of a triangle"<<endl;

cout<<"4. volume of a cylinder"<<endl;

cout<<"5. volume of a sphere"<<endl;

cout<<"6. volume of a cube"<<endl<<endl;


cout<<"select an option (1-6): ";
cin>>x;




if (x==1) {


   cout<<endl<<"<< Area of a circle  >>"<<endl<<endl;

   cout<<"inter radius "<<endl;
   cin>>radious;


   result=pie*radious*radious;


   cout<<"Area of the circle is "<<result<<endl;

          }



else if (x==2) {

  cout<<endl<<"<< Area of a rectangle  >>"<<endl<<endl;

  cout<<"enter length"<<endl;
  cin>>line1;

  cout<<"enter width"<<endl;
  cin>>line2;


  result=line1*line2;


  cout<<"Area of the rectangle is "<<result<<endl;
}





else if (x==3) {

   cout<<endl<<"<< Area of a triangle >>"<<endl<<endl;

   cout<<"enter height"<<endl;
   cin>>line1;

   cout<<"enter base"<<endl;
   cin>>line2;


   result=(line1*line2)/2;


   cout<<"Area of the triangle is "<<result<<endl;
               }





else if (x==4) {


   cout<<endl<<"<< volume of a cylinder  >>"<<endl<<endl;

   cout<<"enter radius "<<endl;
   cin>>radious ;

   cout<<"enter height "<<endl;
   cin>>line1;


   result=pie*radious*radious*line1;


   cout<<"volume of the cylinder is "<<result;

               }





else if (x==5) {


    cout<<endl<<"<< 5. volume of a sphere >>"<<endl<<endl;

    cout<<"enter radius"<<endl;
    cin>>radious;


    result=(4*pie*radious*radious*radious)/3;


    cout<<"volume of the sphere  is "<<result;
               }





else if (x==6) {


      cout<<endl<<"<< 6. volume of a cube  >>"<<endl<<endl;

      cout<<"enter edge "<<endl;
      cin>>line1;


      result=line1*line1*line1;


      cout<<endl<<"volume of the cube is "<<result<<endl;

               }




else {
      cout<<endl<<"wrong instruction please tap 1 to 6"<<endl;
     }

return 0;
}





