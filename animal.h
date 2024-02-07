#ifndef ANIMAL_H
#define ANIMAL_H

typedef struct ANIMAL_STRUCT
{
	char* speech;
	void (*speek)(struct ANIMAL_STRUCT* self);
} Animal;

Animal* new_animal(Animal* animal, char* speech);

void animal_speek(Animal* animal);

#endif