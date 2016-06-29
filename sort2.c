#include "sort1.h"

void sort2(int * a, int n)
{  
    
    int indexMin,i,j; 
	
   // loop through all numbers 
   for(i = 0; i < n-1; i++)
   { 
	
      // set current element as minimum 
      indexMin = i;
		
      // check the element to be minimum 
      for(j = i+1;j<n;j++)
      {
         if(a[j] < a[indexMin])
         {
            indexMin = j;
         }
      }
       if(indexMin != i)
       {
         			
         // swap the numbers 
         int temp = a[indexMin];
         a[indexMin] = a[i];
         a[i] = temp;
       }
   }
}   