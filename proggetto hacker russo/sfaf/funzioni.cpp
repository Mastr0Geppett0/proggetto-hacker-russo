#include "akira.hpp"
void InputDimArray(int &Dim)
{

	do
	{
		cout<<"insert array size";
		cin>>Dim;
		cout<<endl;	
	}while(Dim<2);
	return;
}
void  InputArray(int &Dim,int Vet[])
{
	for(int i=0;i<Dim;i++)
	{
		cout<<"insert array value";
		cin>>Vet[i];
		cout<<endl;	
	}
	return;
}
int compare(int Vet[],int &Dim)
{
	int cont;
	cont = 0;
	for(int i=0;i<Dim;i++)
	{
		if(Vet[i]>5)cont++;	
	}
	return cont;		
}
