/* Author: Ashley K. Smith 
 * Solution to "C Programming: A modern approach" chapter 2, programming project 2
*/

#include <stdio.h>
#define PI 3.14

int main(void){
	int radius = 10;
	float volume;

	radius = radius * radius * radius;
	
	volume = (4.0f / 3.0f) * PI * radius;	
	printf("%0.2f\n", volume);
	
	return 0;
}
