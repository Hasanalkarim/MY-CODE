#include <iostream>

using namespace std;

int main (){


int  x[10],i,num,y,search_ind,counter;


y=14;

cout<<"How many integers ";
cin>>num;



//taking input as array

for (i=0; i<num; i++){

    cout<<"x["<<i<<"]=";

    cin>>x[i];


}


// Main process

counter=0;


for (i=0; i<num; i++){

    if(x[i]==y){ // seaching the value (linear srearch)

         search_ind=i;  // saving location of the of tht value on array

         counter=counter+1;

    }

}




//printing array

cout<<"********* X ********"<<endl;



for (i=0; i<num; i++){

cout<<x[i]<<" ";

}



//printing result

if(counter==0){

cout<<endl<<endl<<"did not found ";


}
else{
      cout<<endl<<endl<<"found the value "<<x[search_ind];  

      cout<<endl<<"Location of that number "<<search_ind;

      cout<<endl<<" found that value "<<counter<<" times";  


}








return 0;
}
