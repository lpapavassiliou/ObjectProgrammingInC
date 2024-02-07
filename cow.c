#include "cow.h"
#include <stdlib.h>

Cow* new_cow()
{	
	//create a cow object
	Cow* cow;
	cow = calloc(1, sizeof(Cow));
	
	//create a parent onto the child memory
	Animal* animal;
	animal = new_animal((Animal*) cow, "mooooooooh");
	
	//connect inherited functions
	cow->speek = animal->speek;

	return cow;		
}
