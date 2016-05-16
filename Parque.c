#include <stdlib.h>
#include <stdio.h>


struct Parque
{
	int numLugares;
	int numSegundos;
	int lugares[][];
};

int main(int argc , char *argv[])
{
	struct Parque p;

	p.numLugares=atoi(argv[1]);
	p.numSegundos=atoi(argv[2]);

	printf("%d %d", p.numLugares, p.numSegundos);

	return 0;
}
