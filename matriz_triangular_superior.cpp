#include<iostream>
using namespace std;
int main()
{
	//Orden de la matriz
	int n;
	cin>>n;
	//Creación de la matriz triangular superior
	int MTSUP[100][100];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<=j)
			{
				MTSUP[i][j]=1;
			}
			else
			{
				MTSUP[i][j]=0;
			}
		}
	}
	
	//Mostrarlo en la pantalla
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<MTSUP[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}
