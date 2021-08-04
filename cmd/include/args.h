#ifndef _args_h

#define _args_h

#include <stdbool.h>

//No need to add any sort of security for using C++;
//As we are using only C here.


//Function: setMainParams

//What it does:
//Sets the internal main parameters to the ones passed to main().
void setMainParams(int argc, char **argv);

//Function: setArgsToLookOutFor

//What it does:
//Sets the arguments to look out for
//Returns an array of ints that are the indices of the arguments.
void setArgsToLookOutFor(char **args, int count);

//checkIfUnrecognizedOptionIsPresent
//Is an unrecognized option present?
bool checkIfUnrecognizedOptionIsPresent();

//Like checkIfUnrecognizedOptionIsPresent, but for a declared arg.
bool checkIfArgIsPresent(int arg);

int getIndexOfRecognizedArg(int arg);

#endif //_args_h
