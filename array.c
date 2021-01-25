#include <stdio.h>

int main(){

  int array[10];

  for(int i=0;i<10;i++){
    array[i]=i*2;
  }

  for(int i=0;i<10;i++){
    printf("array[%d]=%d (%p)\n",i,array[i], &array[i]);
  }

  printf("array: %p\n",array);

  printf("*array: %d\n",*array);

  int * p = array;

  printf("-----\n");
  for(int i=0;i<10;i++){
    printf("p[%d]=%d\n",i,p[i]);
  }

  printf("-----\n");
  int * q = &array[4];
  printf("*q=%d\n",*q); //q[0]
  printf("q[1]=%d\n",q[1]); //q[1]
  printf("*(q+2)=%d\n",*(q+2)); //q[2]
  
}
