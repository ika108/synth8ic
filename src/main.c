// For now, this file is just a stub to play with autotools...

#include <config.h>
#include <stdio.h>

#ifdef HAVE_UNISTD_H
#	include <unistd.h>
#endif

int main(void) {
	puts("Hello World !");
	puts("This is " PACKAGE_STRING ".");
	return(0);
}
