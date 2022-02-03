#include <iostream>

using namespace std;

int main() {

int i,j,k,num,m;

//talking input

cout<<"Print the shape ";
cin>>num;


for(i=0; i<num; i++){

       for(j=num; j>=i+1; j=j-1){

           if(j==5){

           cout<<" Five ";

       }
       else if (j==4){

           cout<<" Four ";

       }
        else if (j==3){

           cout<<" Three ";

       }
        else if (j==2){

           cout<<" Two ";

       }
        else {

           cout<<" One ";

       }


       }

 cout<<endl<<endl;


}
return 0;
}


