#include <iostream>

using namespace std;

int main () {


int mark;

cin>>mark;


if (mark>100) {
               cout<<"invailid";

              }

else if (mark<0) {
               cout<<"invailid";

              }

else if (mark>=85) {
               cout<<"A";

              }
else if (mark>=80) {
               cout<<"A-";

              }
else if (mark>=75) {
               cout<<"B+";

              }

else if (mark>=65) {
               cout<<"B-";

              }
else if (mark>=60) {
               cout<<"C+";

              }

else if (mark>=55) {
               cout<<"C";

              }

else if (mark>=50) {
               cout<<"C-";

              }
else if (mark>=45) {
               cout<<"D+";

              }

else if (mark>=40) {
               cout<<"D";

              }
else  {
               cout<<"F";

              }














return 0;
}
