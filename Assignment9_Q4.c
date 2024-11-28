/*
  4. Write Program which accept tempeature in fahrenheit 
    and convert it into celcius
    (1 Celcius =(Fahrenheit - 32) * (5/9))
*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
  double dCelcius = 0.0;

  dCelcius = (fTemp - 32) * (5/9);
  return(dCelcius);
}

int main()
{
  float fValue = 0.0;
  double dRet = 0.0;

  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &fValue);

  dRet = FhtoCs(fValue);

  printf("temperatur in Celcius is: %lf",dRet);
  
  return 0;

}