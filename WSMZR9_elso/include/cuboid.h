#ifndef CUBOID_H
#define CUBOID_H

/**
 * Data of a cuboid object in Descartes coordinate system
 */
typedef struct Cuboid
{
	double w;
	double h;
	double l;
} Cuboid;

/**
 * Set the data of the cuboid
 */
void set_cuboid_data(Cuboid* cuboid, double w, double h, double l);

/**
 * Calculate the area of the cuboid.
 */
double calc_cuboid_volume(const Cuboid* cuboid);

double calc_cuboid_surface(const Cuboid* cuboid);
#endif // cuboid_H
