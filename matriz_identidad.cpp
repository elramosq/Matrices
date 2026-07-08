#include<iostream>
using namespace std;
int main()
{
	int n;
	
	//Orden de la matriz
	cout<<"Ingrese el orden de la matriz identidad: ";cin>>n;
	
	//creación de la matriz
	int MID[100][100];
	
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				MID[i][j]=1;
				
			}
			else
			{
				MID[i][j]=0;
			}
		}
		
	}
	
	//mostrarlo en la pantalla
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
					
		cout<<MID[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	return 0;
	
}
