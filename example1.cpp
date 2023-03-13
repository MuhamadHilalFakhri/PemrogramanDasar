#include <iostream>
using namespace std;

int main ()
{ //begin
//Numeric Bil
int bil;
//Character status
string status;
//displat "masukkan bilangan = "
cout << "masukkan bilangan = ";
//accept bil
cin >> bil;
//if(bil == 0)
if (bil == 0)
//status = "nol"
status = "nol" ;

//else if (bil %2 == 0)
else if (bil %2 == 0) 
//status = "genap"
status = "genap";
else 
//status = "ganjil"
status = "ganjil" ;
//display "bilangannya = " + status
cout <<"bilangannya = " << status ;
}