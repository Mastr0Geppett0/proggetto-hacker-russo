#include <iostream>
#include <string>
using namespace std;

void acquisiscInput(int &in){
    printf("insersci anno di nascita: ");
    scanf("%d", &in);
}

int calcolaeta(int annoNascita, const int ANNO_ATTUALE= 2022) {
    return(ANNO_ATTUALE-annoNascita);
}
int main(int argc, const char** argv) {

    int annoNascita;

    acquisiscInput(annoNascita);
    printf("\eta: %d", calcolaeta(annoNascita));


    return 0;
}
