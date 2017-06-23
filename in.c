#include<stdio.h>
void sort(int *array);
void read();
int n,array[10];
main(){
  int i;
  read(array);
  sort(array);

  for(i=0;i<n;i++)
    {
      printf("%d  ",array[i]);
    }
  printf("\n");
  return 0;
}
void sort(int *array)
{int c,d,t,i;
 for (c = 1 ; c <=n-1; c++) {
    d = c;
 
    while ( d > 0 && array[d] < array[d-1]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
}
void read()
{int i;
  printf("enter size\n");
  scanf("%d",&n);
  printf("enter items");
  for(i=0;i<n;i++)
    {
      scanf("%d",&array[i]);
    }
}
