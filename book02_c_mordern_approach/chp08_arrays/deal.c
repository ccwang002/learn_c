#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
	bool in_hand[NUM_SUITS][NUM_RANKS] = {{false}};
	// Suit code:
	// c: club
	// d: diamonds
	// h: hearts
	// s: spades
	const char suit_code[] = {'c', 'd', 'h', 's'};
	const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't',
						      'J', 'Q', 'K', 'A'};

	// seed the generator with current time.
	srand((unsigned) time(NULL));

	printf("Enter number of cards in hand: ");
	int num_cards;
	scanf("%d", &num_cards);

	printf("Your hand: ");
	int suit, rank;
	while (num_cards > 0) {
		suit = rand() % NUM_SUITS;
		rank = rand() % NUM_RANKS;
		if (!in_hand[suit][rank]) {
			in_hand[suit][rank] = true;
			num_cards--;
			printf(" %c%c", suit_code[suit], rank_code[rank]);
		}
	}
	printf("\n");

	return 0;
}
