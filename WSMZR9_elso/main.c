#include "cuboid.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
	Cuboid cuboid;
	double volume;
	double surface;

	set_cuboid_data(&cuboid, 5, 10, 8);
	volume = calc_cuboid_volume(&cuboid);
	surface = calc_cuboid_surface(&cuboid);


	printf("Cuboid volume: %lf\n", volume);

	printf("Cuboid surface: %lf\n", surface);

	return 0;
}
