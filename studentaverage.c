/*program to store the marks of students in a 2D array. There are 4 students, and the program needs to record the mark of 3 subjects per student. The marks can be decimal.Compute the average mark of each student*/
#include<stdio.h>
#define NUM_STUDENTS 4
#define NUM_SUBJECTS 3
void calculateAverage(int student,float marks[NUM_SUBJECTS]) 
{
float sum=0;
for(int i=0;i<NUM_SUBJECTS;i++)
{
sum+=marks[i]; 
}
float average=sum/NUM_SUBJECTS;
printf("\nStudent %d Average: %.2f\n", student+1, average);
}
int main()
{
float marks[NUM_STUDENTS][NUM_SUBJECTS];
printf("Enter marks for %d students in %d subjects:\n", NUM_STUDENTS, NUM_SUBJECTS);
 for(int i=0;i<NUM_STUDENTS;i++)
{
printf("Student %d:\n",i+1);
 for(int j=0;j<NUM_SUBJECTS;j++)
{
scanf("%f",&marks[i][j]);
}
}
printf("\nStudent Marks and Averages: \n"); for(int i=0;i<NUM_STUDENTS;i++)
{
printf("\nStudent %d Marks:",i+1); 
for(int j=0;j<NUM_SUBJECTS;j++)
{
printf("\n%.2f",marks[i][j]);
} 
calculateAverage(i,marks[i]);
 }
return 0;
}
