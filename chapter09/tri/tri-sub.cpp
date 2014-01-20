#include <assert.h>

/***************************************
 * calc triangle area
 * arguments
 *   width -- base width of triangle
 *   height -- height of triangle
 * return
 *   area of triangle
 **************************************/
float triangle(float width, float height) {
	float area;

	assert(width >= 0.0);
	assert(height >= 0.0);

	area = width * height / 2.0;

	return area;
}
