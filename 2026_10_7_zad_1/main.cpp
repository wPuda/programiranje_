#include <iostream>

using namespace std;

int main()
{
   int prvi, drugi;
   int zbroj,razlika,umnozak,kolicnik;

   cout << "Upiši dva realna broja"<<endl;
   cin >> prvi;
   cin >> drugi;

   zbroj = prvi + drugi;
   razlika = prvi - drugi;
   umnozak = prvi*drugi;
   kolicnik = prvi/drugi;

   cout<<"Zbroj = "<<zbroj<<endl;
   cout<<"Razlika = "<<razlika<<endl;
   cout<<"Umnožak = "<<umnozak<<endl;
   cout<<"Koliènik = "<<kolicnik<<endl;



    return 0;
}
