#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int N,min,max;
    printf("Input N: ");
    scanf_s("%d", &N);
    int* mass,i,j;
    
           mass = (int *)malloc(N * sizeof(int));
            printf("Input the array elements:\n");
             for ( i = 0; i < N; i++)
                scanf_s("%d", &mass[i]);
                  int tmp;
   
   
   
   
    for ( i = N - 1; i >= 0; i--)
    {
      for (j = 0; j < i; j++)
        {
            if (mass[j] < mass[j + 1])
            {
                tmp = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = tmp;
            }
        }
      
      
      
    }
  
                  printf("Sorted array:\n");
                       for ( i = 0; i < N; i++)
                         printf("%d ", mass[i]);
                          printf("\n");
    
    
    
    if (mass[i]>0)
        if (min<mass[i])
			{
				min = mass[i];
			}
	    printf ("\n min dodatniy= %d ", min);
	    
	    
 free(mass);

	return 0;
}
