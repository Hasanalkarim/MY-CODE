#include <iostream>

using namespace std;

int main() {



int i,j,num;


cout<<"Print Shape ";
cin>>num;

for (i=0; i<=num; i=i+1){


                 //j=1 because the user want 1 from the start

                  for (j=1; j<=i; j=j+1){

                        cout<<j%2<<" "; //when odd it will print 1 and when even will print 0

                     }

    cout<<endl<<endl;

}





return 0;

}



