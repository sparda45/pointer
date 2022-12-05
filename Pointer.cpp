#include <iostream>

using namespace std;

main(){
    long *P;
    long X;

    P=&X;

    X=10; //Mengisikna nilai 10 ke dalma variabel X

    cout<<"Nilai X  : "<<X<<endl;
    cout<<"Nilai *P : "<<*P<<endl;
    cout<<"Nilai P  : "<<P<<endl;
    cout<<"Nilai &X : "<<&X<<endl;

    *P=200; //Mengisikan nilai 200 ke dalam *P

    cout<<"Nilai X  : "<<X<<endl;
    cout<<"Nilai *P : "<<*P<<endl;
    cout<<"Nilai P  : "<<P<<endl;
    cout<<"Nilai &X : "<<&X<<endl;

    return 0;
}
