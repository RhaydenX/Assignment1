#include "sort1.h"

void sort1(int *a,int n)
 {
   int i, j, k, temp;
   for (i = 1; i < n; i++)
    {
      for (j = 0; j < n - 1; j++) 
      {
         if (a[j] > a[j + 1]) 
         {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
         }
      }
   }


}
