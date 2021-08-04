//Copyright (c) Helix Graziani 2021

#include <args.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <defs.h>

int ac;
char **av;

void setMainParams(int argc, char **argv)
{
	ac = argc;
	av = argv;
}

char **argsToLookOutFor;
int argCount;

void setArgsToLookOutFor(char **args, int count)
{
	argsToLookOutFor = args;
	argCount = count;
}

bool checkIfUnrecognizedOptionIsPresent()
{
	if (ac == 1) return false;
	int i, j;
	bool unrecognized = true;
	printv("Looping through argv...");
	for (i = 1; i < ac; i++)
	{
		printvwa("argv loop %d, ", i);
		printvwa("%s\n", av[i]);
		for (j = 0; j < argCount; j++)
		{
			printvwa("lookout loop %d, ", j);
			printvwa("%s\n", argsToLookOutFor[j]);
			if (*(av[i]) == '-' && strcmp(av[i], argsToLookOutFor[j]) == 0)
			{
				unrecognized = false;
			}
		}
		if (unrecognized == true)
		{
			printv("Unrecognized is true, stopping");
			break;
		}
	}
	return unrecognized;
}

bool checkIfArgIsPresent(int arg)
{
	if (ac == 1) return false;
	int i, k;
	for (i = 1; i < ac; i++)
	{
			if (strlen(argsToLookOutFor[arg]) <= 2)
			{
				for (k = 0; k < strlen(av[i]); k++)
				{
					if (av[i][k] == argsToLookOutFor[arg][strlen(argsToLookOutFor[arg]) == 2 ? 1 : 0])
					{
						return true;
					}
				}
			} 
			else
			{
				if (strcmp(av[i], argsToLookOutFor[arg]) == 0)
				{
					return true;
				}
			}
	}
	return false;
}

int getIndexOfRecognizedArg(int arg)
{
	int i, k;
        for (i = 1; i < ac; i++)
        {
                        if (strlen(argsToLookOutFor[arg]) <= 2)
                        {
                                for (k = 0; k < strlen(av[i]); k++)
                                {
                                        if (av[i][k] == argsToLookOutFor[arg][strlen(argsToLookOutFor[arg]) == 2 ? 1 : 0])
                                        {
                                                return i;
                                        }
                                }
                        }
                        else
                        {
                                if (strcmp(av[i], argsToLookOutFor[arg]) == 0)
                                {
                                        return i;
                                }
                        }
        }
        return 0;
}
