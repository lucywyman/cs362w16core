/******************
 ** Test Adventurer function from `dominion.c`
 ******************/
#include "common.h"

int main(int argc, char** argv) {
	// Initialize the game
	struct gameState G;
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, 
		sea_hag, tribute, smithy};
	initializeGame(2, k, atoi(argv[1]), &G);
	printf("Starting cardtest 1:\n");

	// Test happy path
	int c = cardEffect(7, -1, -1, -1, &G, -1, 0);
	assert(c == 0);

	// Try to break
	G.handCount[0] = 0;
	G.handCount[1] = 0;
	c = cardEffect(7, -1, -1, -1, &G, -1, 0);
	assert(c == 0);

	printf("All tests passed\n");

	return 0;
}
