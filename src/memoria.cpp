#include<iostream>
#include<TazoDorado.hpp>
using namespace std;


int main(int argc, char const *argv[])
{
    // int   entero=0;
    // bool  booleano=true;
    // char  letra='A';
    // float decimal=0.5;

    // cout<<"Tamanio Entero:"<<sizeof(entero)  << endl;
    // cout<<"Tamanio boleano:"<<sizeof(booleano)  << endl;   
    // cout<<"Tamanio letra:"<<sizeof(letra)  << endl;
    // cout<<"Tamanio decimal:"<<sizeof(decimal)  << endl;
    // cout<<"Tamanio de TazoDorado:"<<sizeof(TazoDorado)  << endl;

    // TazoDorado tazo[20];

    // TazoDorado tazo1;
    // TazoDorado tazo2;
    // cout<<"Direccion Tazo 1: "<<&tazo1<<endl;
    // cout<<"Direccion Tazo 2: "<<&tazo2<<endl;

    // for (size_t  i= 0; i<20; i++)
    // {
    //     cout<<"Direccion de Tazo:"<<i<<" "<<&tazo[i] << endl;
    // }

//C----------------------------------------------------------

    TazoDorado* direccion;
    direccion=(TazoDorado *)malloc(sizeof(TazoDorado));
    direccion->Inicializar();
    cout<<"Valor en direccion:"<<direccion->Flotando()<< endl;

//C++----------------------------------------
    TazoDorado *direccion2;
    direccion2 = new TazoDorado();
    cout<<"Valor en direccion:"<<direccion2->Flotando()<< endl;

    return 0;
}
