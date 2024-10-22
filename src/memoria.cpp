#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int   entero=0;
    bool  booleano=true;
    char  letra='A';
    float decimal=0.5;

    cout<<"Tamanio Entero:"<<sizeof(entero)  << endl;
    cout<<"Tamanio Entero:"<<sizeof(booleano)  << endl;   
    cout<<"Tamanio Entero:"<<sizeof(letra)  << endl;
    cout<<"Tamanio Entero:"<<sizeof(decimal)  << endl;
    return 0;
}
