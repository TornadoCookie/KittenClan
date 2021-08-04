#ifndef _file_h
#define _file_h

#ifdef __cplusplus
extern "C" {
#endif

#include "cats.h"

struct cat decodecat(char*filename);
char* encodecat(struct cat _cat);


#ifdef __cplusplus
}
#endif

#endif