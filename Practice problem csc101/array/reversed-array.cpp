#include <iostream>

using namespace std;

int main (){


int  x[10],i,num;

cout<<"How many integers ";
cin>>num;



//taking input as array

for (i=0; i<num; i++){

    cout<<"x["<<i<<"]=";

    cin>>x[i];


}


// printing output

for(i=0; i<num; i++){

    cout<<x[i]<<" ";
}


// printing reversed

 cout<<endl<<"***Reversed****";
 cout<<endl;




for (i=num-1; i>=0; i=i-1){ //the last number is not in num but in num-1 becouse of zero we count extra


            cout<<x[i]<<" ";

}





return 0;
}
