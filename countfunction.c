/* to count the number of times the function is called.*/

#include<stdio.h>
int f(void);
int main(void)
{
    printf("%d\n",f());
    printf("%d\n",f());
    printf("%d\n",f());
return 0;

}
int f(void)
{
    static int count=0;
    ++count;
    return(count);
}