#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{   
    int n,d;
    scanf("%d",&n);
    scanf("%d",&d);
    int i,arr[n];
    for (i = 0; i < n; i++) 
        scanf("%d ", &arr[i]); 
    for (i = 0; i < n; i++) 
        d=d%n;
     for(i=d;i<n;i++)
      printf("%d ",arr[i]);   
       
     for (i=0;i<d;i++) 
        printf("%d ",arr[i]);   

    return 0; 
} 