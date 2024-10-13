/*this keeps a running total of every value passed to a function. The program will read input until the end-of-file (EOF) is reached*/
#include<stdio.h>
int sum(int);
void main(void)
{
    int value;
    scanf("%d",&value);
    while(value!=EOF)
    {
        printf("Running sum: %d\n", sum(value));
        scanf("%d",&value);
    }
}
int sum(int value)
{
static int sum=0;
sum+=value;
return sum;
}
 
