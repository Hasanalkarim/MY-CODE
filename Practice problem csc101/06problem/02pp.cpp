#include <iostream>

using namespace std;

int main () {

int first,second,i,r,userinput;

//taking input

cout<<"First number ";
cin>>first;

cout<<"Second number ";
cin>>second;


if(second<first){

r=second;

second=first;

first=r;

}



for (i=first; i<=second; i++) {


         if(i>9) {


                userinput=i;

                r=0;
                            while (i>0) {

                            r=r*10;   //adding zero as last digit

                            r=r+i%10; //adding r and taking the last number

                            i=i/10;   //removing the last number



                                  }



                //printing output


                if(r==userinput){

                    cout<<userinput<<" ";

                }


                i=userinput;

         }//first if



}//for bracket











return 0;

}
