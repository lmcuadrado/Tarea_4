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
void c2(float area[][c]);
void c3(float area[][c]);
void creartxt(float area[][c], string nombre);
double promedio(float area[][c]);

int main()
{
	
	return 0;
}

void creartxt(float area[][c], const char* nombre)
{

   FILE *output;      
   output = fopen(nombre,"w");
  
   for (int i=0; i<f-1 ; i++)       
   {  
      if(i!=0)
      {
      	fprintf(output, "\n");  
      }
      
        for (int j=0; j<c-1; j++) 
        {
          fprintf(output, "%f,", area[i][j]);
        }
   }
   fclose(output);
}

double promedio(float area[][c])
{
    double sumita=0.0;

    for (int i= 0; i< f-2; i++)
	{
        	for (int j= 0; j< c-2; j++)
            	sumita+=area[i][j];
	}
    return sumita/(49 * 49);
}

void c1(float area[][c]) //Fijas
{
	int cont=0;
    
	if(cont<=N)
	{
	
		for (int i=1 ; i<f-2 ; i++)
		{
			for (int j = 1 ; j<c-2 ; j++)
			{
				circulo(area,radio,x,y);
				area[i][j]=(1-(4*dt*v)/(h*h))*area[i][j]+(dt*v/h*h)*(area[i+1][j]+area[i][j+1]+area[i-1][j]+area[i][j-1]);
			casos(area,10,1);
			}
		
		
			if (cont==1)
			{
				creartxt(area,"fija1.txt");
			
			}
			else if(cont==500)
			{
				creartxt(area,"fija2.txt");
			}
			else if(cont==1000)
			{
				creartxt(area,"fija3.txt");
			}
			else if(cont==2000)
			{
				creartxt(area,"fija4.txt");
			}
		}
	}
	cont+=1;
	
}

void c2(float area[][c]) //Periodicas
{
	int cont= 0;
    
  	if(cont<=N)
	{
		for (int i=1; i< f; i++)
		{
			for (int j= 1 ; j<c ; j++)
			{
				circulo(area,radio,x,y);
				area[i][j]=(1-(4*dt*v)/(h*h))*area[i][j]+(dt*v/h*h)*(area[i+1][j]+area[i][j+1]+area[i-1][j]+area[i][j-1]);
			}

			casos(area,25,3);

			if (cont==1)
			{
				creartxt(area,"periodica1.txt");
			}
			else if(cont==400)
			{
				creartxt(area,"periodica2.txt");
			}
			else if(cont==1250)
			{
				creartxt(area,"periodica3.txt");
			}
			else if(cont==1820)
			{
				creartxt(area,"periodica4.txt");
			}
		}
	}
	cont+=1;
	
}

void c3(float area[][c]) //libres
{
	int cont = 0;
	if(cont<=N)
	{
		for (int i= 1 ; i< f-2 ; i++)
		{		
			for (int j=1 ; j<c-2 ; j++)
			{
				circulo(area,radio,x,y);
				area[i][j]=(1-(4*dt*v)/(h*h))*area[i][j]+(dt*v/h*h)*(area[i+1][j]+area[i][j+1]+area[i-1][j]+area[i][j-1]);	
			}

			casos(area,N,2);
			if (cont==1)
			{
				creartxt(area,"libres1.txt");
			}
			else if(cont==500)
			{
				creartxt(area,"libres2.txt");
			}
			else if(cont==1000)
			{
				creartxt(area,"libres3.txt");
			}
			else if(cont==2000)
			{
				creartxt(area,"libres4.txt");
			}
		}
 	}
	cont+=1;
	
}



void circulo(float area[][c],int radio, int x,int y)
{

	for(int i=x-radio; i <= x + radio; i++)
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













