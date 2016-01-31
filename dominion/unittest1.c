/******************
 ** Test shuffle function from `dominion.c`
 ******************/
#include "common.h"

int main(int argc, char** argv) {
	// Initialize the game
	struct gameState G;
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, 
		sea_hag, tribute, smithy};
	initializeGame(2, k, atoi(argv[1]), &G);
	printf("Starting unittest 1:\n");

	// Set deck count to 0 so shuffle should fail
	G.deckCount[1] = 0;
	int s = shuffle(1, &G);
	assert(s == -1);

	// And test happy path
	G.deckCount[1] = 5;
	s = shuffle(1, &G);
	assert(s == 0);

	printf("All tests passed\n");

	return 0;
}
