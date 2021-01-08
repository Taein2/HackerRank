#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 101
int main() 
{
    char ch,s[MAX_LEN],sen[MAX_LEN];
    scanf("%c", &ch);
    scanf("%s\n",s);
    scanf("%[^\n]s", sen);
    printf("%c\n", ch);
    printf("%s\n",s);
    printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}