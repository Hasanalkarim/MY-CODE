#include <iostream>

using namespace std;

int main (){


int  x[10],i,num,y,y_index[10],index;


cout<<"How many integers ";
cin>>num;



//taking input as array

for (i=0; i<num; i++){

    cout<<"x["<<i<<"]=";

    cin>>x[i];


}


cout<<"Search: ";
cin>>y;           // going to y_index this number




// Main process


index=0;

for (i=0; i<num; i++){

    if(x[i]==y){ // seaching the y value (linear srearch)

         y_index[index]=i;  // saving location of all y on y_index array

         index=index+1;    // increasing index

    }



}




//*******************************output*************************

if(index>0){
  
        cout<<y<<" is avilable at location: ";  

        for (i=0; i<index; i++){ // print y_index array*****

        cout<<y_index[i]<<" ";

        }//*********************************************

}
else{

        cout<<endl<<"Not found";


}


cout<<" of below array "<<endl;



for (i=0; i<num; i++){ //printing x array

cout<<x[i]<<" ";

}// ***************************


cout<<endl;




return 0;
}
