#include<iostream>
using namespace std;

int main()
{
    cout<<"-------------------------\n\n";
    cout<<"PROGRAM MENCARI KOORDINAT\n\n";
    cout<<"Tugas Algoritma Pemrograman Semester Ganjil(Masdi Aditia)\n";
    cout<<"-------------------------\n\n";
    float x,y,jawab;
    menu:
    cout<<"Masukan titik x:";
    cin>>x;
    cout<<"Masukan titik y:";
    cin>>y;

        if(x>0&&y>0)
                cout<<"\nkoordinat berbeda di kuadran 1\n\n"<<"---------------------------------\n\n";
            else if(x< 0&&y>0)
                cout<<"\nkoordinat berada di kuadran 2\n\n"<<"----------------------------------\n\n";
            else if(x<0 &&y<0)
                cout<<"\nkordinat berada di kuadran 3\n\n"<<"-----------------------------------\n\n";
            else if(x>0 &&y<0)
                cout<<"\nkordinat berada di kuadran 5\n\n"<<"----------------------------------\n\n";

                return 0;
}






















