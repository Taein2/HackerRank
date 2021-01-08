#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    double dNum1, dNum2;
    scanf("%d %d\n",&num1,&num2);
    scanf("%lf %lf",&dNum1,&dNum2);
    printf("%d %d\n",num1+num2,num1-num2);
    printf("%0.1f %0.1f\n",dNum1+dNum2,dNum1-dNum2);
        
    return 0;
}