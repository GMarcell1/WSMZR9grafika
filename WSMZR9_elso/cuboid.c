#include "cuboid.h"

#include <math.h>

void set_cuboid_data(Cuboid* cuboid, double w, double h, double l)
{
	cuboid->w = w;
	cuboid->h = h;
	cuboid->l = l;
}

double calc_cuboid_volume(const Cuboid* cuboid)
{
	double volume = cuboid->w * cuboid->h * cuboid->l;
	return volume;
}


double calc_cuboid_surface(const Cuboid* cuboid)
{
	double surface = 2 * (cuboid->w*cuboid->h + cuboid->w*cuboid->l + cuboid->h*cuboid->l);
	return surface;
}
