#include <iostream>

using namespace std;

int main() {

int i,j,k,num,m;

//talking input

cout<<"Print the shape ";
cin>>num;


for(i=0; i<num; i++){

       for(j=num-i; j>=1; j=j-1){


        cout<<j<<" ";

       }

 cout<<endl<<endl;


}
return 0;
}


//num=5

//i=0

//j=num-i==5,4,3,2,1

//j=j-1==4,3,2,1,0  3,2,1,0  2,1,0  1,0  0

//i=i+1=1,2,3,4,5





