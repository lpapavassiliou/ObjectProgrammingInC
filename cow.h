#ifndef COW_H
#define COW_H

#include "animal.h"

typedef struct COW_STRUCT
{
	Animal* base;
	void (*speek)(struct ANIMAL_STRUCT* animal);	
} Cow;

Cow* new_cow();

#endif
