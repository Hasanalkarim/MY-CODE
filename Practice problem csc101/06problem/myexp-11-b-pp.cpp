#include <iostream>

using namespace std;

int main() {

int i,j,k,num,m;

//talking input

cout<<"Print the shape ";
cin>>num;



for (i=num; i>0; i=i-2){ // 2 loop 2 minues in i


       for(j=i; j>=1; j=j-1){// reversed loop

               cout<<j<<" ";
       }


       cout<<endl<<endl;


       m=i-1;
       for(k=1; k<=m; k++){ //forward loop

         cout<<k<<" ";
       }



       cout<<endl<<endl;

      }


return 0;
}

