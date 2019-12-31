#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 5432.2354;
	char initial = 'B';
	char first_name[] = "Brandon";
	char last_name[] = "Greenwell";

	printf("You are %d miles away,\n", distance);
	printf("You have %f levels of power,\n", power);
	printf("You have %f levels of super powers,\n", super_power);
	printf("My inital is %c.\n", initial);
	printf("My name is %s %s.\n", first_name, last_name);

	return 0;

}
