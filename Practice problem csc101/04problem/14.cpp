#include <iostream>
using namespace std;

int main () {

int first,second;



cout<<"enter first number" ;
cin>>first;

cout<<"enter second number" ;
cin>>second;

if (first>second) {
                          first=first-1;


                   for (second; second<=first ; second=second+1 ){





                                  if (second%7==0) {
                                                 cout<<second<<","; //only the odd number will number will print
                                                   }

                                                                }


                                       cout<<second;


                 }

else { //same prossess reversed replace first to second and second to first

                      second=second-1;

      for (first; first<=second ; first=first+1 ){



                                            if (first%7==0) {
                                                          cout<<first<<",";
                                                            }

                                                }


                   cout<<first;
     }


return 0;
}
