#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int num1,num2;
    num1 = *a, num2 = *b;
    *a = num1 + num2;
    if(num1 > num2){
        *b = num1 - num2;
    }else{
        *b = num2 - num1;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}