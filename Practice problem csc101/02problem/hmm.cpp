#include <iostream>

using namespace std;

int main () {


int x,y,z,r;


//input

cout<<"Please enter x: ";
cin>>x;

cout<<"Please enter y: ";
cin>>y;

cout<<"Please enter z: ";
cin>>z;


//calculation

if (x>y) {
            if (x>z) {
                    if (y>z) {

                            //large x
                            //small z

                                if ((x-z)>y) {

                                           if (z<0) {

                                                z=z*(-1);

                                                r=(x+z)-y;


                                         cout<<"Weird result is:"<<"("<<x<<"+"<<z<<")-"<<y<<"="<<r;
 

                                           }

                                        else {

                                        r=(x-z)-y;
                                        cout<<"Weird result is:"<<"("<<x<<"-"<<z<<")-"<<y<<"="<<r;

                                        }
                                        

                                }
                                
                                else {

                                     r=y-(x-z);
                                  
                                     cout<<"Weird result is:"<<y<<"-("<<x<<"-"<<z<<")"<<"="<<r;
   
                                }


                            }
                    else { //large x
                           //small y 


                            

                                if ((x-y)>z) {
                                             
                                             if(y<0) {

                                                  y=(-1)*y;

                                                  r=(x+y)-z;

                                                  cout<<"Weird result is:"<<"("<<x<<"+"<<y<<")-"<<z<<"="<<r;


                                             }

                                            else {

                                                r=(x-y)-z; 

                                               cout<<"Weird result is:"<<"("<<x<<"-"<<y<<")-"<<z<<"="<<r;


                                            }



                                   
                                }

                                else {

                                   r=z-(x-y);


                                   cout<<"Weird result is:"<<z<<"-("<<x<<"-"<<y<<")"<<"="<<r;

                                }


                            

                        }
                    }


            else   {  //large z
                     //small y
                       
                       if ((z-y)>x) {

                                   if (y<0) {
                                               y=(-1)*y;

                                              r=(z+y)-x;

                                              cout<<"Weird result is:"<<"("<<z<<"+"<<y<<")-"<<x<<"="<<r;

                                   }

                                  else {


                                          r=(z-y)-x;

                                          cout<<"Weird result is:"<<"("<<z<<"-"<<y<<")-"<<x<<"="<<r;


                                      }
                        

                       }




                       else {

                         r=x-(z-y);

                         cout<<"Weird result is:"<<x<<"-("<<z<<"-"<<y<<")"<<"="<<r;


                       }
        



                   }
         }



else {

        if (y>z) {
                if(x>z) {  //large y
                            //small z

                                if ((y-z)>x) {


                                           if (x<0) {
                                               
                                               z=(-1)*z;
       
                                               r=(y+z)-x;
                                           
                                               cout<<"Weird result is:"<<"("<<y<<"+"<<z<<")-"<<x<<"="<<r;
                                              

                                           }


                                           else {

                                                r=(y-z)-x;

                                                cout<<"Weird result is:"<<"("<<y<<"-"<<z<<")-"<<x<<"="<<r;   
                                           }

        

                                       




                                             }
                                else {
                                      r=x-(y-z);


                                      cout<<"Weird result is:"<<x<<"-("<<y<<"-"<<z<<")"<<"="<<r;

                                        
                                     }
                        
                        }
                       
                else { //large y
                        //small x


                               if ((y-x)>z) {

                                              if (x<0) {

                                                   x=(-1)*x;  

                                                   cout<<"Weird result is:"<<"("<<y<<"+"<<x<<")-"<<z<<"="<<r;

                                                   }

                                             else {

                                                r=(y-x)-z;

                                                cout<<"Weird result is:"<<"("<<y<<"-"<<x<<")-"<<z<<"="<<r;

                                             }

                                     

                               }
                               else {

                                     r=z-(y-x);

                                      cout<<"Weird result is:"<<z<<"-("<<y<<"-"<<x<<")="<<r;
                               }
                              

                                
                     }
        }
        else { //large z
               //small x

                    if ((z-x)>y) {

                              if (x<0) {

                                      x=(-1)*x;


                                      r=(z+x)-y;

                                      cout<<"Weird result is:"<<"("<<z<<"+"<<x<<")-"<<y<<"="<<r;
                               


                                      }
                            else {

                            r=(z-x)-y;

                            cout<<"Weird result is:"<<"("<<z<<"-"<<x<<")-"<<y<<"="<<r;

                            }


                       
                    }

                    else {

                      r=y-(z-x);

                     cout<<"Weird result is:"<<y<<"-("<<z<<"-"<<x<<")="<<r;
                    }







             }
    }




return 0;

}
