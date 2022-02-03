#include <iostream>

using namespace std;

void print(char c, int n);

int main()
{
    int number1, space,i ,j;


    char ch1, ch2;

    cout<<"How many lines:";
    cin>>number1;



    cout<<"Left Symbol:";
    cin>>ch1;





    cout<<"Right Symbol:";
    cin>>ch2;



    space=0;

    for(i=number1; i>=1; i=i-1){

        print(ch1,i);



        for(j=0;j<space;j=j+1){

            cout<<" ";
        }
        space = space+2;


        print(ch2,i);



        cout<<endl;


    }




    return 0;
}


void print(char c, int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        cout<<c;
    }
}
