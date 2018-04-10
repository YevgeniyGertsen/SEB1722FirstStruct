#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "gamer.h"

void crateName(char * name, int length)
{
	for (int i = 0; i < length-1; i++)
	{
		*(name + i) = (char)(95 + rand() % 25);
	}
	*(name + length) = '\0';
}

void printInfo(gamer * team, int length)
{
	printf(" --- Infor about Ordabasy team --- \n");
	for (int i = 0; i < length; i++)
	{
		printf("¹%2d %s countGoal: %d; countGame: %d\n",
			i+1, 
			team[i].fullName, 
			team[i].countGoal, 
			team[i].countGame);
	}
}

amplua getAmplua()
{
	return (amplua)(0 + rand() % 2);
}

gamer * createTeam()
{
	gamer * team = (gamer*)calloc(11, sizeof(gamer));

	if (team != NULL)
	{
		for (int i = 0; i < 11; i++)
		{
			crateName(team[i].fullName, 50);
			team[i].age = 20 + rand() % 20;
			team[i].countGame = 1 + rand() % 20;
			team[i].countGoal = 1 + rand() % 100;
			team[i].amplua = getAmplua();
		}

		printInfo(team, 11);
	}
	else
	{
		printf("Error\n");
		exit(1);
	}

	return team;
}

