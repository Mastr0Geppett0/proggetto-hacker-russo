#include <iostream>
#include <string>
using namespace std;
// made by jeff rossi and pietro lavecchia
int sommaInteri(int x, int y){
    int somma;
    somma = x+y;
}
int main(int argc, char** argv) {
//Sezione dichiarazioni variabili e costanti
int a,b,c;

//Sezione acquisizione input palle
printf("\ninserisci il valore di a: ");
scanf("%d", &a);
printf("\ninserisci il valore di b: ");
scanf("%d", &b);
//Sezione elaborazione
c = sommaInteri(a,b);
//Sezione presentazione degli input
printf("La somma e:%d",c)
return 0;
}
