#include <iostream>

using namespace std;
 double totalprice(int quantity,double unitprice){

   double price = quantity*unitprice;
   return price;
   }

int main(){
    int qua;
    double uni;
cout<<"enter quantity:";
cin>>qua;
cout<<"enter unit price:";
cin>>uni;

double p=totalprice(qua,uni);

if(qua>=10){
     p=p-p*0.1;}

if(qua>=15){
    p=p-p*0.15;}

    cout<<"total price"<<p<<endl;
    return 0;
}
