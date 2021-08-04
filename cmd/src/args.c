//Copyright (c) Helix Graziani 2021

#include <args.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int ac;
char **av;

void setMainParams(int argc, char **argv)
{
	ac = argc;
	av = argv;
}

char **argsToLookOutFor;
int argCount;

int *setArgsToLookOutFor(char **args, int count)
{
	int i;
	int *res = malloc(count * sizeof(int)); 
	for (i = 0; i < count; i++)
	{
		res[i] = i;
		argsToLookOutFor[i] = args[i];
	}
	argCount = count;
	return res;
}

bool checkIfUnrecognizedOptionIsPresent()
{
	int i, j;
	bool unrecognized = true;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; j < argCount; j++)
		{
			if (strcmp(av[i], argsToLookOutFor[j]) == 0 || strcmp(av[i], strcat("-", argsToLookOutFor[j])) == 0)
			{
				unrecognized = false;
			}
		}
		if (unrecognized == true)
		{
			break;
		}
	}
	return unrecognized;
}

bool checkIfArgIsPresent(int arg)
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
