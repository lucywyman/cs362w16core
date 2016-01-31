/******************
 ** Test isGameOver function from `dominion.c`
 ******************/
#include "common.h"

int main(int argc, char** argv) {
	// Initialize the game
	struct gameState G;
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, 
		sea_hag, tribute, smithy};
	initializeGame(2, k, atoi(argv[1]), &G);
	printf("Starting unittest 4:\n");

	// Test happy path
	int g = isGameOver(&G);
	assert(g == 0);

	for(int i = 0; i< 5; i++){
		G.supplyCount[i] = 0;
	}
	g = isGameOver(&G);
	assert(g == 1);

	printf("All tests passed\n");

	return 0;
}
