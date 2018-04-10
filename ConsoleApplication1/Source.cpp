#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include "GamerService.h"
#include "StudentService.h"

void main()
{
	srand(time(NULL));

	int count = 0;
	student * st = createStudent(&count);
	for (int i = 0; i < count; i++)
	{
		printInfoStd(&st[i], 1);
	}

	/*gamer * team = createTeam();
	gamer forward;
	int max = team[0].countGoal;

	for (int i = 0; i < 11; i++)
	{
		if (team[i].countGoal > max)
		{
			max = team[i].countGoal;
			forward = team[i];
		}
	}

	printf("Best foreard %s\n", forward.fullName);

	printf("Gamer wich game more 5\n");

	for (int i = 0; i < 11; i++)
	{
		if (team[i].countGame<5)
		{
			printInfo(&team[i], 1);
		}
	}
	*/
	/*Определить лучшего форварда, 
	и вывести сведения о футболистах, 
	сыгравших менее 5-ти игр*/
}