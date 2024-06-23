#include <stdio.h> 
#include <conio.h> 
  void main() 
  { 
      float c, f; 
      
      printf(" Enter temp in centigrade: "); 
      scanf("%f",&c); 
      f = ( 1.8 * c ) + 32; 
      printf(" Temperature in Fahrenheit = %f", f); 
      getch(); 
  } 