#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

const float k=1.62e4;
const float cp=820e10;
const float rho=2.71;
const float h=1.0;
const float v=2710;
const float dt=(h*h)/(4*v); //Coeficiente de difusion 
const float nu=k/cp*p 
const int f = 50;
const int c = 50;
const int x=25;
const int y=25;
const int radio=5;
const int N=10;

//Funciones
void circulo(float seccion[][c],int radio, int x,int y);

int main()
{
	
	return 0;
}

void circulo(float seccion[][c],int radio, int x,int y)
{

	for(int i = x - radio; i <= x + radio; i++)
	{
   
   		for(int j = y - radio; j <= y + radio; j++)
   		{
       			if( (i-x)*(i-x) + (j-y)*(j-y) <= radio*radio)
      			 {
        			 seccion[i][j]=100;
      			 }
   		}
	}
}










