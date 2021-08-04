// 
// KittenClan for command-line
// Copyright (C) 2021 Helix Graziani
//

//cmd.c: Main.
//This file puts everything together.
//It contains the main function.

//Include header files.
#include <cats.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <defs.h>
#include <args.h>

#define arg_b       0x00
#define arg_n       0x01
#define arg_c       0x02
#define arg_h       0x03
#define arg_s       0x04
#define arg_f       0x05
#define arg_d       0x06
#define arg_h       0x07
#define arg_breed   0x08
#define arg_name    0x09
#define arg_cat     0x0A
#define arg_help    0x0B
#define arg_version 0x0C
#define arg_verbose 0x0D
#define arg_save    0x0E
#define arg_file    0x0F
#define arg_dob     0x10
#define arg_dod     0x11
#define arg_health  0x12

//The current cat.
//This could either be loaded from file,
//or constructed on the spot.
struct cat current_cat;

//Function: pause

//What it does:
/*
 * It prompts the user to press a key to continue.
*/
void pause(void)
{
	printf("\nPress any key to continue...\n");
#ifdef _WIN32
	getch();
#else
	getchar();
#endif
}

//Function: main
//You know what this function does.

int main(int argc, char **argv)
{
    verbose = false;
    bool noargs = argc == 1 ? true : false;
    puts("\nKittenClan v1\n\n");
    setMainParams(argc, argv);
    char **argus = {
	    [arg_b] = "-b",
	    [arg_n] = "-n",
	    [arg_c] = "-c",
	    [arg_h] = "-h",
	    [arg_s] = "-s",
	    [arg_f] = "-f",
	    [arg_d] = "-d",
	    [arg_h] = "-h",
	    [arg_breed] = "--breed",
	    [arg_name] = "--name",
	    [arg_cat] = "--cat",
	    [arg_help] = "--help",
	    [arg_version] = "--version",
	    [arg_verbose] = "--verbose",
	    [arg_save] = "--save",
	    [arg_file] = "--file",
	    [arg_dob] = "--dob",
	    [arg_dod] = "--dod",
	    [arg_health] = "--health"
    };
    int *args = setArgsToLookOutFor(argus);
    if (checkIfUnrecognizedOptionIsPresent())
    {
	    puts("Unknown argument.\n");
	    return 0;
    }
    if (checkIfArgIsPresent(arg_b) || checkIfArgIsPresent(arg_breed))
    {
	    
    }
    if (checkIfArgIsPresent(arg_n) || checkIfArgIsPresent(arg_name))
    {
	   current_cat.name =  argv[(getIndexOfRecognizedArg(arg_n) || getIndexOfRecognizedArg(arg_name)) + 1];
    }
    puts("\nAnd, above all else, remember this one fact:\nNot all cats are the same. Some require other needs, or might not fit the description in this application. That's OK.");
    return 0;
}
