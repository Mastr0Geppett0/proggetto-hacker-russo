#include <iostream>
#include <string>
using namespace std;
void scambista(int x, int y,int z)
{
	if(x>y&&x>z)
	{	
		printf("%d",x);
	}
	else
	{
		if(y>x&&y>z)
		{
			printf("%d",y);
		}
		else
		{
			if(z>x&&z>y)
			{
				printf("%d",z);	
			}
		}	
	}
	retun;
}
int main(int argc, char **argv)
{
	int a,b,c;
	return 0;
	
}

