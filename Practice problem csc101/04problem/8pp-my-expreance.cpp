#include <iostream>

using namespace std;

int main () {

int first,second;

cout<<"inter first number";
cin>>first;

cout<<"second  number";
cin>>second;


if(first!=second){
                  if (first>second){
                                    if (second%2==0){  second=second+1; }   //to make it odd adding plus one


                                    if (first%2==0){
                                                    first=first-3;

                                                    for ( second; second<=first; second=second+2){//adding 2 plus from odd to odd exmpl:13+2=15

                                                                                              cout<<second<<",";
                                                                                                 }

                                                    cout<<first+2; //adding 2 plus  to get the last value from even to odd
                                                    }

                                    else{

                                         first=first-2;     //perfect-first-odd


                                         for (second; second<=first; second=second+2){ //adding 2 plus from odd to odd exmpl:13+2=15

                                                                                cout<<second<<",";
                                                                                     }

                                         first=first+2;

                                         cout<<first;               //perfect-first-odd

                                        }

                                   }





                   else{
                         if (first%2==0) { first=first+1; }  //to make it odd adding plus one




                         if (second%2==0){
                                          second=second-3;

                                          for (first; first<=second; first=first+2){
                                                                                  cout<<first<<",";

                                                                                   }
                                          cout<<second+2;

                                         }

                         else {
                                second=second-2;


                                for (first; first<=second; first=first+2){

                                                                         cout<<first<<",";
                                                                        }

                                second=second+2;

                                cout<<second;
                              }

                        }//last else

                 }//THE MAIN BIG IF


return 0;

}
