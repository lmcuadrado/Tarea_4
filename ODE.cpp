#include <iostream>
#include <iomanip>
#include <cmath>
#include <functional>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const float g=10;	//gravedad
const float c=0.2;	//coeficiente de friccion
const float m=0.2;	//masa
const float dt=0.5;
const int f=300;
const int col=4;

//Funciones
void creartxt(float area[][col], const char* nombre);
float f2x(float x,float y);
float f2y(float x,float y);
float rk4(float x0,float y0);
void solx();

int main()
{
	return 0;
}

void creartxt(float area[][col], const char* nombre)
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
          fprintf(output, "%f,",area[i][j]);
        }
   }
   fclose(output);
}

float f2x(float x,float y)
{	
	return(-1*c*(sqrt(x*x+y*y)/(m))*x);
}
float f2y(float x,float y)
{
	float t1=-g;
	float t2=c*y;
	float t3=((sqrt(pow(x,2)+pow(y,2)))/m);

	return(t1-(t2*t3));
}

float rk4(float x0,float y0)
{
	float	k1=func(x0,y0);
	float	k2=func(x0+0.5*dt,(yo+0.5*k1_c*dt));
	float	k3=func(x0+0.5*dt,(yo+0.5*k2_c*dt));
	float	k4=func(x0+dt,(y0+k3_c*dt));
	
	return(y0+((dt/6.0)*(k1+2*k2+2*k3+K4)));	
}

void solx()
{
	float respuesta[f][c]={};
	for (int i=1;i<f-1;i++)
	{
		respuesta[i][0]=rk4(a_x,i*dt,1.0);
	}
	creartxt(respuesta,"please.txt");
}










