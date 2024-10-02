#include <stdio.h>
#include "other.c"
#include "child/roy.c"

int main() {
	printf("hello from main!\n");
	other();
	roy();
}
