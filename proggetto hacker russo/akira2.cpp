#include <iostream>
#include <cmath>
using namespace std;

int somma_Interi(int x, int y){

	int somma;
	somma = x+y;
	return somma;

}
void scambista(int x, int y,int z){
	z = x;
	x = y;
	y = z;
	printf("\nil valore di a %d",x);
	printf("\nil valore di b %d",y);
	printf("\nl'indirizzo di x %x",&x);
	printf("\nl'indirizzo di y %x",&y);
	printf("\nla somma risulta %d\n",somma_Interi(x,y));
	return ;
}
int main(int argc, char **argv){
	
	int a,b,c;

	printf("immetti variabili\n");
	scanf("%d%",&a);
	scanf("%d%",&b);
	printf("\nil valore di a %d",a);
	printf("\nil valore di b %d",b);
	printf("\nl'indirizzo di a %x",&a);
	printf("\nl'indirizzo di b %x",&b);
	printf("\nla somma risulta %d\n",somma_Interi(a,b));
	scambista(a,b,c);
	return 0;
}
