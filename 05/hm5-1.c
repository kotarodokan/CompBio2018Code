#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int r,M,N,x,i,t,a;
  a=0;
  srand(time(NULL));
  M=1;
  N=6;
for(t=0;t<1000;t++){
  x=0;
  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
a=a+i;
      break;
    }
    }
  }

printf("%f\n",(double)a/1000.0);
    return 0;
}
