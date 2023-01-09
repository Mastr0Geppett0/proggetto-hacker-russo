#include "akira.hpp"

int main(int argc, char** argv) 
{
	int size,result;
	InputDimArray(size);
	int Array[size];
	InputArray(size,Array);
	result = compare(Array,size);
	cout<<"I numeri sono maggiori di 5 sono"<<result<<endl;
	return 0;
}
