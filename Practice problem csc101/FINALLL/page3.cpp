#include <iostream>

using namespace std;


void print_line(char , int n);

int odd(int);

int main () {

int n,i,j,k;

char ch1,ch2,t;


  cout<<"how many lines:";
  cin>>n;



  cout<<"Left symbol:";
  cin>>ch1;
  


  cout<<"right symbol:";
  cin>>ch2;


       print_line(ch1,n);

        print_line(ch2,n);

       cout<<endl;

     for(i=n; i>0; i=i-1){

        print_line(ch1,i);

             
           k=0;
         for(j=1; j<k; j++){

             cout<<"  ";

        

         }
         k=k+2;

        print_line(ch2,i);

    


        cout<<endl;
     }

        
   







return 0;

}



//*********************************************print sit

void print_line(char c, int n){

    int i;
    for(i = 0; i<n;  i = i + 1){


    cout<<c;

    }

    
}


//***********************************


int odd(int num1){



  int i,count;

     count=0;

      cin>>num1;

    for(i=1; ; i=i+2){

        count=count+1;

          if(count==num1){

              break;
          }


    }



  return i;


}
