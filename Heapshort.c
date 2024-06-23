
   #include<stdio.h> 
   #include<conio.h> 
   void main() 
  { 
     int b[10],no,i,j,c,p,temp; 
     
     printf("\n\n Enter no of elements.."); 
     scanf("%d",&no); 
     printf(" Enter the nos.."); 
     for(i=0;i<no;i++) 
       scanf("%d",&b[i]); 
     for(i=1;i<no;i++) 
     { 
       c=i; 
      do
      { 
         p=(c-1)/2; 
         if(b[p]<b[c]) 
        { 
          temp=b[p]; 
           	b[p]=b[c]; 
           b[c]=temp; 
        } 
         c=p; 
      }while(c!=0); 
    } 
    for(j=no-1;j>=0;j--) 
    { 
       temp=b[0]; 
       b[0]=b[j]; 
       b[j]=temp; 
       p=0; 
      do 
       { 
         c=2*p+1; 
         if((b[c]<b[c+1]) && c<j-1) 
         c++; 
         if(b[p]<b[c] && c<j) 
        { 
           temp=b[p]; 
           b[p]=b[c]; 
           b[c]=temp; 
         } 
         p=c; 
      }while(c<j); 
    } 
     printf(" The sorted nos are.."); 
     for(i=0;i<no;i++) 
     printf("%d",b[i]); 
     getch(); 
  } 