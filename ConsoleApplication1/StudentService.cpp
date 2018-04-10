#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "student.h"
#include "GamerService.h"

void generateSubject(Subject * sub)
{
	sub->bal = 1 + rand() % 9;

	char num[3];
	itoa((1 + rand() % 90), num, 10);

	strcpy(sub->nameSubject, "Subject # ");
	strcpy(sub->nameSubject, num);
}

student * createStudent(int *count)
{
	*count = 1 + rand() % 30;
	student * st = 
		(student*)malloc(*count * sizeof(student));

	for (int i = 0; i < *count; i++)
	{
		crateName(st[i].fullName, 5);
		crateName(st[i].group, 10);

		for (int j = 0; j < 5; j++)
		{
			generateSubject(&st[i].subjects[j]);
		}
	}

	return st;
}

void printInfoStd(student * students, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("#%2d. %s (%s)\n",
			i + 1,
			students[i].fullName,
			students[i].group);

		for (int j = 0; j < 5; j++)
		{
			printf("-->%s\t%d\n",
				students[i].subjects[j].nameSubject,
				students[i].subjects[j].bal);
		}
		printf("\n");
	}
}