#include <stdio.h>

int main(int argc, char *argv[])
{
	int bugs = 100;
	double bugRate = 1.2;
	printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bugRate);
	
	long universeOfDefects = 1L;
	printf("The entire universe has %ld bugs.\n", universeOfDefects);
	
	double expectedBugs = bugs * bugRate;
	printf("You are expected to have %f bugs.\n", expectedBugs);
	
	double partOfTheUniverse = expectedBugs / universeOfDefects;
	printf("That is only %e portion of the universe.\n", partOfTheUniverse);
	
	// this makes no sense, just a demo of something weird
	char nulByte = '\0';
	printf("This is the NULL byte: %c.\n", nulByte);
	int carePercentage = bugs * nulByte;
	printf("Which means you should care %d%%.\n", carePercentage);
	
	return 0;
}
