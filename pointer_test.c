#include <stdio.h>

int main(int argc, char *argv[]) {
	int vars[] = {1,2,3,4,5,6,7,8,9};
	int *var = vars;
	int count = sizeof(vars) / sizeof(vars[0]);
	
	printf("Location: %d\n\n", &vars);
	int i = 0;
	
	printf("Count: %d\n\n", count);
	
	for(i = 0; i < count; i++) {
		printf("%d", *(var + i));
	}
}