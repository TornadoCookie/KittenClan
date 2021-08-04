
#include <breed.h>
#include <defs.h>
#include <stdio.h>
#include <string.h>

//This function contains one function, the breed function.


static bool *breed(int index, int argc, char **argv)
{
    printv("Breed function called.\n")
    static bool breed_index[breed_incorrect+1];// The return value.
    bool breed_exists = false; //Set if a breed is found.
    int i;
    for (i=index;i<argc;i++) //Loop through argv, starting at index.
    {
        printv("Looping. (breeds)\n")
        char *v = argv[i]; //The current command-line argument.
        printvwa("Char: %s\n", v)
        if (*v == '-') //Stop if the argument starts with "-" or "--".
        {
            printv("End of breeds.\n")
            break;
        }
        int ii;
        for (ii=0;ii<breed_incorrect;ii++) //Loop through all breeds.
        {
            printv("Looping II. (breeds)\n")
            if(verbose){printf("ii: %d; breed: %p\n", ii, &breeds[ii]);}
            if ((strcmp(v,breeds[ii].name) == 0 || strcmp(v+2,breeds[ii].name) == 0)) //If the name matches, add the breed to the array.

            {
                printv("Breed match found.\n")
                breed_index[ii] = true;
                breed_exists = true;
            }
        }
    }
    if (!breed_exists)
    {
        breed_index[breed_incorrect] = true;
    }
    return breed_index;
}

