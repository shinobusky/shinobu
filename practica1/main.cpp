#include <iostream>

using namespace std;

int main()
{

    int anio;
    cout<<"ingrese año"<<endl;
    cin>>anio;
    if((anio%4)==0){
        if((anio%100)!=0 ||(anio%400)==0)
            cout<<"es bisiesto"<<endl;
    }
    else
        cout<<"no es bisiesto"<<endl;


    int a=0,i,n;
        cout<<"Ingrese numero"<<endl;
        cin>>n;
        for(i=1;i<(n+1);i++){
        if(n%i==0){
            a++;
        }
        }
        if(a!=2){
            cout<<"No es Primo";
        }else{
            cout<<"Si es Primo";
        }


    return 0;

}
