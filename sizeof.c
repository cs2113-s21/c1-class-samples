#include <stdio.h>

int main(){

  int i = 2021;
  short s = 5;
  char c = 'G';
  double d = 2.78;
  float f = 3.14;
  long l = 124124901;
  long long ll = 12312312312304;


  printf("i:%d sizeof(int)=%lu sizeof(i)=%lu\n",
	 i,sizeof(int), sizeof(i));
  
  printf("l:%ld sizeof(long)=%lu sizeof(l)=%lu\n",
	 l,sizeof(long), sizeof(l));

  printf("f:%f sizeof(float)=%lu sizeof(l)=%lu\n",
	 f,sizeof(float), sizeof(f));

    

}
