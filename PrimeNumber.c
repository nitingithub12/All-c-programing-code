




  #include <stdio.h>
  #include <conio.h>
  int main() 
  { 
    int i,j=2,ch=0; 
    
    printf("\nENTER ANY NUMBER"); 
    scanf("%d",& i); 
    while(j<= i/2) 
    { 
        if(i%j==0) 
         { 
             printf("%d IS NOT PRIME",i); 
            ch=1; 
            break; 
        } 
        else 
        { 
            j++; 
        } 
    } 
    if(ch==0) 
    { 
          printf("%d IS PRIME",i); 
      } 
  } 

