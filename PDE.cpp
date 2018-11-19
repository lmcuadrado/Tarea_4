#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

const float k=1.62e4;
const float cp=820e10;
const float rho=2.71;
const float h=1.0;
const float v=2710;
const float dt=(h*h)/(4*v); //Coeficiente de difusion 
const float nu=k/cp*rho; 
const int f = 50;
const int c = 50;
const int x=25;
const int y=25;
const int radio=5;
const int N=10;

//Funciones
void circulo(float area[][c],int radio, int x,int y);
void casos(float area[][c],float T,int caso);
void c1(float area[][c]);

int main()
{
	
	return 0;
}

void circulo(float area[][c],int radio, int x,int y)
{

	for(int i = x - radio; i <= x + radio; i++)
	{
   
   		for(int j = y - radio; j <= y + radio; j++)
   		{
       			if( (i-x)*(i-x) + (j-y)*(j-y) <= radio*radio)
      			 {
        			 area[i][j]=100;
      			 }
   		}
	}
}


void casos(float area[][c],float T, int caso)
{
	if (caso==1)
		{
			for (int i = 0 ; i<c ; i++)
			{
				area[0][i]=T;
				area[c-1][i]=T;
				area[i][0]=T;
				area[i][c-1]=T;	
			}

		}
	
	if (caso==2)
		{
			for (int i = 0 ; i < c; i++)
			{
				area[0][i]=T;
				area[c-1][i]=T;
				area[i][0]=T;
				area[i][c-1]=T;	
			}


		}	

	if (caso==3)
		{
			for (int i = 0 ; i < c-1 ; i++)
			{
				area[0][i]=10;
				area[f-1][i]=10;
				area[i][0]=10;
				area[i][c-1]=10;
			}

		}
}

void c1(float area[][c])
{
	int cont=0;
    
	if(cont<=N)
	{
	
	for (int i=1 ; i<f ; i++)
	{
			for (int j = 1 ; j < c ; j++)
			{
				circulo(area,radio,x,y);
				area[i][j]=(1-(4*dt*v)/(h*h))*area[i][j]+(dt*v/h*h)*(area[i+1][j]+area[i][j+1]+area[i-1][j]+area[i][j-1]);
			casos(area,10,1);
			}
	}

	cont+=1;
	}
}









