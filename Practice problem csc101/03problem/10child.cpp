#include <iostream>

using namespace std;

int main () {


int age;


cin>>age;


if (age>=65) {

    cout<<"Late Adulthood";
}

else if (age>=40) {

    cout<<"Mature Adulthood";
}
else if (age>=20) {

    cout<<"Young Adulthood";
}
else if (age>=65) {

    cout<<"Late Adulthood";
}
else if (age>=12) {

    cout<<"Adolescence";
}
else if (age>=3) {

    cout<<"Childhood";
}

else if (age>=1) {

    cout<<"Infancy";
}

else  {

    cout<<"Ivalid";
}

return 0;

}
