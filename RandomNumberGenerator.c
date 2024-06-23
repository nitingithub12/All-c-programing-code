
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{ 
    int n, max, num, c; 
    
    // Ask user for input
    printf("Enter the number of random numbers you want: "); 
    scanf("%d", &n); 
    
    printf("Enter the maximum value of random number: "); 
    scanf("%d", &max); 
    
    printf("%d random numbers from 0 to %d are:\n", n, max); 
    
    // Seed the random number generator
    srand(time(0));
    
    // Generate and print random numbers
    for (c = 1; c <= n; c++) 
    { 
        num = rand() % (max + 1); 
        printf("%d\n", num); 
    } 
    
    return 0; 
}
