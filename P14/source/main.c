#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4

int minimum(const int grades[][EXAMS], int pupils, int tests)
{
	int A=100;
	for (int i = 0; i < pupils; i++)
	{
		for ( int j = 0;  j < tests;  j++)
		{
			if (grades[i][j] < A)
			{
				A = grades[i][j];
			}
		}
		
	}
	return A;
}
int maximum( int grades[][EXAMS], int pupils, int tests) {
	int A = 0;
	for (int i = 0; i < pupils; i++)
	{
		for (int j = 0; j < tests; j++)
		{
			if (grades[i][j] > A)
			{
				A = grades[i][j];
			}
		}

	}
	return A;
}
double average( int setOfGrades[], int tests) 
{
	int total = 0;
	for (int i = 0; i < tests; i++)
	{
		total = total + setOfGrades[i];
	}
	
	return (double)total / tests ;
}
void printArray(  int grades[][EXAMS], int pupils, int tests) 
{
	printf("          [0]   [1]   [2]   [3]");
	for (int i = 0; i < pupils; i++)
	{
		printf("\nstudentGrade[%d] ", i);
		for (int j = 0; j < tests; j++)
		{
			printf("%-5d", grades[i][j]);
		}
	}
}

int main()
{
	int student;
	const int studentGrades[STUDENTS][EXAMS] = 
	{
		{77,68,86,73},
		{96,87,89,78},
		{70,90,86,81}};
	printf("The array is:\n");
	printArray(studentGrades, STUDENTS, EXAMS);
	printf("\n\nLowest grade: %d\n", minimum(studentGrades, STUDENTS, EXAMS));
	printf("Greatest grade: %d\n", maximum(studentGrades, STUDENTS, EXAMS));

	for (student = 0; student <= 2; student++)
	{
		printf("The average grade for student %d is : %.2f\n", student, average(studentGrades[student], EXAMS));
	}

	system("pause");
	return 0;
}
