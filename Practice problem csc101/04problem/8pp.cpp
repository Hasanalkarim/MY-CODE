#include <iostream>
using namespace std;

int main () {

int first,second;



cout<<"enter first number" ;
cin>>first;

cout<<"enter second number" ;
cin>>second;

if (first>second) {

                    if (first%2==0) {

                                    first=first-1; //even if user gives me an even i convert it to odd

                                    }


                   for (second; second<first ; second=second+1 ){


                                  if (second%2==1) {
                                                 cout<<second<<","; //only the odd number will number will print
                                                   }

                                                                }

                  cout<<second;

                 }

else { //same prossess reversed replace first to second and second to first

      if (second%2==0) {

                        second=second-1;

                        }

      for (first; first<second ; first=first+1 ){

                                            if (first%2==1) {
                                                          cout<<first<<",";
                                                            }

                                                }

        cout<<first;

     }


return 0;
}
