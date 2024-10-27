/*program to find the largest three elements in an array. Assume the array has n (>3) positive elements.*/
#include<stdio.h>
int main()
{
int num1, num2,num3;
printf("Enter the first number:");
scanf("%d",&num1);
printf("Enter the second number:");
scanf("%d",&num2);
printf("Enter the third number:");
scanf("%d",&num3);
if (num1>3 && num2>3 && num3>3) 
{
if(num1>=num2 && num1>=num3)
{
printf("%d is the largest number.\n",num1); }
else if (num2>=num1 && num2>=num3){
printf("%d is the largest number.\n", num2);
 }
else
{
printf("%d is the largest number.\n",num3);
}}
else
{
printf("Invalid input.Numbers must be positive and greater than 3."); 
}
return 0;
}