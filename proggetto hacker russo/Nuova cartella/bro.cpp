#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int dim;

    do
    {
        cout<<"inseriscila dimensione dell'array: ";
        cin>>dim;
        cout<<endl;
    } while (dim<2);
    
    int arrayInt[dim];

    cout<<"inserisci il valore dell'array: "<<endl;
    for (i = 0; i < dim; i++)
    {
        cout<<"inserisci il valore dell'arrayInt["<<i<<"]: ";
        cin>>arrayInt[i];
        cout<<endl;
    }


    cout<<"inserisci il valore dell'array: "<<endl;
    for (i = 0; i < dim; i++)
    {
        cout<<"inserisci il valore dell'arrayInt["<<i<<"]:"<<arrayInt[i]<<ednl;
    }
    

    return 0;
}
