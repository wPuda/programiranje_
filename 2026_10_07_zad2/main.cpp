#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int broj;
    int orijentacija,av,kb;


    cout << "Unesi Broj od -100 do 100" << endl;
    cin>>broj;

    if(broj%2==0){
        cout<< "Broj je paran"<<endl;
    }
    else cout<<"Broje je neparan"<<endl;

    av=abs(broj);
    cout<<"Apsloutna virjednost ="<<av<<endl;

    kb=broj*broj;
    cout<<"Kvadrat broja ="<<kb<<endl;









    return 0;
}
