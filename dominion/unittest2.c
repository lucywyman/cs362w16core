/******************
 ** Test buyCard function in `dominion.c`
 *******************/
#include "common.h"

int main(int argc, char** argv) {
	// Initialize the game
	struct gameState G;
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, 
		sea_hag, tribute, smithy};
	initializeGame(2, k, atoi(argv[1]), &G);
	printf("Starting unittest 2:\n");

	// Set supplyPos to a negative number
	int b = buyCard(-2, &G);
	assert(b == -1);

	// Test happy path
	G.coins = 10;
	G.numBuys = 3;
	b = buyCard(2, &G);
	assert(b == 0);

	printf("All tests passed\n");

	return 0;
}
