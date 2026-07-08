#include<iostream>
using namespace std;
int main()
{
	int n,m, A[20][20], AT[20][20];
	
	cin>>n>>m;
	
	//creación de la matriz
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
		}
	}
	
	//creación de la matriz transpuesta
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			
			AT[j][i]=A[i][j];
		}
	}
	
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		
		cout<<AT[i][j]<<" ";
		cout<<endl;
	}

	
	return 0;
	
}
