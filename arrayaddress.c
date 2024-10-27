/*To print the address of a double array to show that th elements of the array are stored sequentially.Print the array length */
#include<stdio.h>
int main()
{
    double arr[5]={1.1,2.2,3.3,4.4,5.5};
    int n=sizeof(arr)/sizeof(arr[0]);
printf("Array Length:%d\n",n);
printf("Memory Addresses of Array Elements:\n");
for(int i=0;i<n;i++)
{
    printf("Elements %d(%f) stored at address: %p\n",i,arr[i],(void*)&arr[i]);
}
return 0;
}
