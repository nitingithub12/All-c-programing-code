 int BinarySearch(int *array, int number_of_elements, int key) 
 { 
      int low = 0, high = number_of_elements-1, mid; 
      while(low <= high) 
       { 
           mid = (low + high)/2; 
          if(array[mid] < key) 
           { 
                  low = mid + 1; 
           } 
          else if(array[mid] == key) 
           { 
                  return mid; 
           } 
          else if(array[mid] > key) 
           { 
                   high = mid-1; 
           } 
       } 
      return -1; 
 } 
 int main() 
 { 
      int number_of_elements; 
       scanf("%d",&number_of_elements); 
      int array[number_of_elements]; 
      int iter; 
      for(iter = 1;iter < number_of_elements;iter++) 
       { 
          if(array[iter]< array[iter - 1]) 
           { 
                  printf("Given input is \n not sorted\n"); 
 return 0; 
           } 
       } 
       int key; 
       scanf("%d",&key); 
 /* Calling this functions searches for the key and returns its index. It returns -1 if key is not found.*/ 
      int index; 
      index = BinarySearch(array,number_of_elements,key); 
      if(index==-1) 
      { 
               printf("Element not found\n"); 
      } 
      else 
      { 
              printf("Element is at index %d\n ",index); 
      } 
      return 0; 
 } 
