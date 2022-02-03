#include <iostream>

using namespace std;

int main (){


int  x[10],y[10],i,num;

cout<<"How many integers ";
cin>>num;



//taking input as array

for (i=0; i<num; i++){

    cout<<"x["<<i<<"]=";

    cin>>x[i];


}






//copying x value to y

for(i=0; i<num; i++){ 

    y[i]=x[i];
    
}


// printing x


cout<<endl<<"********x*******"<<endl;



for(i=0; i<num; i++){

    cout<<x[i]<<" ";

}





// printing y

cout<<endl<<endl<<"********y*******"<<endl;

for(i=0; i<num; i++){

    cout<<y[i]<<" ";

}




return 0;
}
