//
//KittenClan
//Copyright (C) 2021 Helix Graziani
//

//breed.h: Breeds n' stuffs
//This file has the function prototypes for breed.c.
//h

#include "cats.h"

#ifndef _breed_h
#define _breed_h

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus


//Function: breed

//What it does:
/*
 * This function is called by the main function 
 * when the -b or --breed command-line argument is set.
 * It finds matches between command-line arguments,
 * and the Big Array of Breeds (BAoB).
*/

//Arguments:
/*
 * int index: The current index of the main loop,
 * looping through argv, plus one. 
 * It should have the first breed.
 *
 * int argc: The argument counter. 
 * The number of command-line arguments passed to the program,
 * including the command to launch the program itself.
 *
 * char **argv: The argument value.
 * The value of the command-line arguments mentioned in argc,
*/

//Return values:
/*
 * uint8_t*: The breeds of the cat. 
*/
static uint8_t *breed(int index, int argc, char **argv);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif //_breed_h
