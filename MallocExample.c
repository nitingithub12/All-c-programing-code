




   #include<stdio.h> 
   int main() 
  { 
     int *ptr_one; 
     ptr_one = (int*)malloc(sizeof(int)); 
     if (ptr_one == 0) 
    { 
       printf("ERROR: Out of memory\n"); 
      return 1; 
     } 
     *ptr_one = 25; 
    printf("%d", *ptr_one); 
    free(ptr_one); 
    return 0; 
  } 
