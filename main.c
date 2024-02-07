#include <stdio.h>
#include "cow.h"
#include <stdlib.h>

int main()
{
	Animal* animal = calloc(1, sizeof(Animal));
	animal = new_animal(animal, "ciao");
	animal->speek(animal);

	Cow* cow = new_cow();
	cow->speek((Animal*) cow);
	return 0;
}
