#include <stdio.h>

int main(){

  typedef struct{
    int left;
    int right;
  } pair_t; //_t is convention, it says it's a type! 


  pair_t parray[3];

  parray[0].left = 10;
  parray[0].right= 20;

  parray->left = 15;
  parray->right = 30;

  printf("parray[0]: (%d,%d)\n",parray[0].left,parray[1].right);

}
