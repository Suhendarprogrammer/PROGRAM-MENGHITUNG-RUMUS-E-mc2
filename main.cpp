#include <iostream>

using namespace std;

int main()
{
    int e,m,c;
    cout<<"*********PROGRAM MENGHITUNG RUMUS E=mc2*********\n";
    cout<<"================================================\n";
    cout<<"\nDiketahui  E=Energi (Joule)";
    cout<<"\n           m=Massa (Kg)";
    cout<<"\n           c=Kecepatan (m/s)";
    cout<<"\n==============================================\n";
    cout<<"\nMasukkan Massa nya     : ";
    cin>>m;
    cout<<"\nMasukkan Kecepatan nya : ";
    cin>>c;
    cout<<"\nDitanya E=.............? ";
    cout<<"\n======Jawab=======\n";
    e=m*c*c;
    cout<<"E=mc2";
    cout<<"\nMaka Hasilnya Adalah   : "<<e<<"\n";
    return 0;
}
