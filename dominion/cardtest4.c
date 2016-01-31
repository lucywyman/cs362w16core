/******************
 ** Test Ambassador function from `dominion.c`
 ******************/
#include "common.h"

int main(int argc, char** argv) {
	// Initialize the game
	struct gameState G;
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, 
		sea_hag, tribute, smithy};
	initializeGame(2, k, atoi(argv[1]), &G);
	printf("Starting cardtest 4:\n");

	// Test happy path
	int c = cardEffect(20, 1, 1, 3, &G, 2, 0);
	assert(c == 0);

	// Try to break
	c = cardEffect(20, -1, -1, -1, &G, -1, 0);
	assert(c == -1);

	printf("All tests passed\n");

	return 0;
}
