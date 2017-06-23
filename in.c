#include<stdio.h>
void sort(int *array);
main(){
  int array[7]={4,23,43,38,15,10,30};
  int c,d,t,i;
  sort(array);

  for(i=0;i<7;i++)
    {
      printf("%d  ",array[i]);
    }
  return 0;
}
void sort(int *array)
{int c,d,t,i;
 for (c = 1 ; c <=6; c++) {
    d = c;
 
    while ( d > 0 && array[d] < array[d-1]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
}
