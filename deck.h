#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - rd suits.
 * @SPADE: Sps suit.
 * @HEART: Hesuit.
 * @CLUB: Cluuit.
 * @DIAMOND: Diuit.
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Plg card
 *
 * @value: Vathe card
 * From "Ace" toKing"
 * @kind: Kind ord
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - f card
 *
 * @card: P the card of the node
 * @prev: Pus node of the list
 * @next: Pnext node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif
