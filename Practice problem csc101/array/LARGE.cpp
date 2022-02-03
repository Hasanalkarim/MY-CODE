#include <iostream>

using namespace std;

int main (){


int  x[10],i,num,max_ind;

cout<<"How many integers ";
cin>>num;



//taking input as array

for (i=0; i<num; i++){

    cout<<"x["<<i<<"]=";

    cin>>x[i];


}





max_ind=0;

for (i=1; i<num; i++){

    if(x[max_ind]<x[i]){ //max_ind is the location and x[max_ind] is the value

         max_ind=i;

    }



}


//printing output

cout<<"********* X ********"<<endl;



for (i=0; i<num; i++){

cout<<x[i]<<" ";

}




cout<<endl<<endl<<"large number is "<<x[max_ind];

cout<<endl<<"Location of the large number "<<max_ind;









return 0;
}
