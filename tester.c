#include<stdio.h>
#include<assert.h>

int main(){
  int T, N;

  assert( scanf("%d",&T) == 1 );
  assert( 1 <= T && T <= 10000 );

  while(T--){
    assert( scanf("%d",&N) == 1 );
    assert( 1 <= N && N <= 1000000000 );
    if(N%2) N--;
    printf("%d\n",N);
  }

  return 0;
}

