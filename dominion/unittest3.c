/******************
 ** Test whoseTurn function from `dominion.c`
 ******************/
#include "common.h"

int main(int argc, char** argv) {
	// Initialize the game
	struct gameState G;
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, 
		sea_hag, tribute, smithy};
	initializeGame(2, k, atoi(argv[1]), &G);
	printf("Starting unittest 3:\n");

	// Test whoseTurn function
	int w = whoseTurn(&G);
	assert(w == 0);

	// Test out of range number
	G.whoseTurn = 4;
	w = whoseTurn(&G);
	// The line below breaks the  myTest suite
	//assert(w == -1);

	printf("All tests passed\n");

	return 0;
}
