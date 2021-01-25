#include <stdio.h>

int main(){

  typedef struct{
    int left;
    int right;
  } pair_t; //_t is convention, it says it's a type! 

  typedef struct{
    pair_t * left;
    pair_t * right;
  } pairpair_t;

  pair_t p1,p2;

  p1.left =10; //use the dot operator to access a member of the struct
  p1.right=20;

  p2.left=-5;
  p2.right=7;

  printf("p1: (%d,%d)\n",p1.left,p1.right);
  printf("p2: (%d,%d)\n",p2.left,p2.right);

  pairpair_t pp;
  pp.left = &p1;//<----
  pp.right= &p2;

  //also use multiple dots to keep going down the struct hierarchy 
  printf("pp: [(%d,%d),(%d,%d)]\n",
	 pp.left->left,pp.left->right,
	 pp.right->left,pp.right->right);


  pair_t * p = &p1;

  p->left = 50;
  printf("p1: (%d,%d)\n",p1.left,p1.right);
  printf("p: (%d,%d)\n",p->left,p->right);

  //also use multiple dots to keep going down the struct hierarchy 
  printf("pp: [(%d,%d),(%d,%d)]\n",
	 pp.left->left,pp.left->right,
	 pp.right->left,pp.right->right);

  
  
}
