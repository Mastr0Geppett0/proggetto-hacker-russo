#include <iostream>
#include <cmath>
using namespace std;
//dichiarazioni funzioni
int somma_Interi(int x, int y){//essi sono parametri formali mettiamo nome e tipo passati by value
	int somma;
	somma = x+y;
	return somma;// la varibile locale
	/* e vista solo all'interno della funzione
	quindi il suo SCOPE e solo dentro la funzione*/
}
void scambista(int x, int y,int z){
	z  x;
	x = y;
	y = z;
	return ;
}
int main(int argc, char **argv){
	//sezione dichiarazione variabili e costanti
	int a,b,c;
	//sezione acquisitzione input
	printf("imetti variabili\n");
	scanf("%d%",&a);
	scanf("%d%",&b);
	//sezione elaborazione
	scambista(a,b,c);
	c = somma_Interi(a,b);// a,b sono parametri attuali mettiamo solo il valore
	// chiamata canonica
	//sezione presentazione output
	printf("la somma con scambio risulta %d\n",c);
	printf("la somma risulta %d\n",somma_Interi(a,b));

	return 0;
}
