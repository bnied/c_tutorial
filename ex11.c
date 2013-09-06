#include <stdio.h>

int main(int argc, char *argv[])
{
	// Go through each string in argv.

	int i = 0;
	while(i < argc){
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	// Let's make our own array of strings.

	char *states[] = {"California", "Oregon", "Washington", "Texas"};

	int numStates = 4;
	i = 0; // Watch for this!
	while(i < numStates) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}
	
	return 0;
}
