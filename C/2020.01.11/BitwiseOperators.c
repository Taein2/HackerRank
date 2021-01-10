#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int num1=0,num2=0,num3=0;
  for(int i=1; i<n; i++){
      for(int j=i+1; j<=n; j++){
          if( (i & j) < k && num1 < (i&j) ){
              num1 = i&j;
          }
          if( (i| j) < k && num2 < (i|j)){
              num2 = i|j;
          }
          if( (i^j) < k && num3 < (i^j)){
              num3 = i^j;
          }
      }
  }
  printf("%d\n",num1);
  printf("%d\n",num2);
  printf("%d\n",num3);
  
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
