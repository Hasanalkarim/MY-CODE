#include <iostream>

using namespace std;

int main() {



int i,j,num,k;


cout<<"Print Shape ";
cin>>num;
cout<<endl;





for (i=0; i<num; i=i+1){


                  for (j=0; j<=i; j=j+1){


                        if(j%2==0 ){ //work on even //making k 1

                            k=1;
                        }

                      cout<<k<<"  ";


                      if(j%2==0){ //work on even //and coverting to zero

                        k=k-1;
                      }


                     }

    cout<<endl<<endl;

}





return 0;

}



















