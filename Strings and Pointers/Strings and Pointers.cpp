// Strings and Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "math.h"
#include "stdlib.h"
#include "ctype.h"


int main()
{
	char movie1[] = "The return of Manydog";
	//you can never change the name of an array on the left handside
	const char * movie2 = "Hello\n";
	puts(movie2);
	movie2 = "New movie title";
	puts(movie2);
    return 0;
}

