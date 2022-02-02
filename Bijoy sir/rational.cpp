#include <iostream>

using namespace std;

void Printnum(int []);

void makerational(int [], int , int);

void add(int [], int [], int []);

void mult (int [], int [], int []);

int equal(int [], int []);





int main (){

 int r1[2] ,r2[2] ,p ,q ,res [2];


cout<<"enter p ";

cin>>p;

cout<<"enter q ";

cin>>q;


     
makerational(r1, p , q);

 Printnum(r1);


 cout<<"enter p ";

    cin>>p;

    cout<<"enter q ";

    cin>>q;

 makerational(r2, p , q);

 Printnum(r2);

 cout<<endl<<equal(r1, r2);

 //Printnum(res);

    return 0;
}


//***************************function defition*********88

void Printnum(int rf[]){

  cout<<endl<<"p="<<rf[0]<<" q="<<rf[1]<<endl;



};


void makerational(int r[], int p, int q){


    if(q==0){
              cout<<"sorry wrong input";

              exit(0);

    }
    else{

         r[0]=p;

         r[1]=q;


    };


   

};



void add(int r1[], int r2[], int res[]){

    res[0]=(r1[0]*r2[1])+(r2[0]*r1[1]);

    res[1]=r1[1]*r2[1];
};


void mult(int r1[], int r2[], int res[]) {

      res[0]=r1[0]*r2[0];

       res[1]=r1[1]*r2[1];

       //




}





int equal(int r1[], int r2[]){


  return r1[0]*r2[1]==r2[0]*r1[1];

};

