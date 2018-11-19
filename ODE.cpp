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
float f1(float x,float y);
float f2(float x,float y);

int main()
{
	return 0;
}

void creartxt(float area[][col], const char* nombre)
{

   FILE *output;      /* save data in laplace.dat */
   output = fopen(nombre,"w");
  
   for (int i=0; i<f-1 ; i++)         /* write data gnuplot 3D format */
   {  
      if(i!=0)
      {
      fprintf(output, "\n");  
      }
      
        for (int j=0; j<c-1; j++) 
        {
          fprintf(output, "%f,",area[i][j]);
        }
          /* empty line for gnuplot */
   }
 //  printf("data stored in laplace.dat\n");
   fclose(output);
}

float f1(float x,float y)
{
	return((-2*x*x*x)+(12*x*x)-(20*x)+8.5);
}
float f2(float x,float y)
{
	return((x*x*x));
}










