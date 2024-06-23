




   #include <stdio.h> 
   #include <conio.h> 
   #include <string.h> 
   int main() 
   { 
     char str[4][10]; 
     int i; 
      
     for( i = 0; i < 4; i++ ) 
     { 
       printf("\nEnter name %d:", i+1 ); 
       scanf("%s ", str[i] ); 
     } 
     printf("\n Original Order\n"); 
     for(i = 0; i < 4; i++ ) 
     printf("%s\t ", str[i] ); 
     for(i = 0; i < 4; i++ ) 
     { 
       for(j=i+1;j<4;j++) 
       if( strcmp(str[i], str[j]) > 0 ) 
       { 
         strcpy( temp, str[i] ); 
         strcpy( temp, str[i], str[j] ); 
         strcpy( str[j], temp ); 
       } 
     } 
     printf(“\n Sorted Order\n”); 
     for( i = 0; i < 4; i++ ) 
     printf(“ %s\t ”, str[i]); 
     getch(); 
  } 
