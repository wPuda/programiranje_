#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
double kvadrat (double broj);
double udaljenost (double x1,double y1,double x2,double y2);
void ispisiUdaljenost(double rezultat);

int main()
{
    double x1,x2,y1,y2;

    cout<< "unesi kordinate prve toèke (x1,y1)=";
    scanf("%lf %lf",&x1,&y1);
    cout<< "unesi kordinate druge toèke (x2,y2)=";
    scanf("%lf %lf",&x2,&y2);

    double d=udaljenost (x1,y1,x2,y2);
    ispisiUdaljenost(d);
    return 0;
}
double kvadrat(double broj){
return broj*broj;
}
double udaljenost (double x1,double y1,double x2,double y2);{
return sqrt(kvadrat(x2-x1)+kvadrat(y1-y2));
}
void ispisiUdaljenost(double rezultat);{
cout<< "udaljenost izmedu tocki="<<rezultat<<endl;
}
