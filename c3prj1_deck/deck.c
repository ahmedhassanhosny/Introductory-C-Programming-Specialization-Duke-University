#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "deck.h"
void print_hand(deck_t * hand){
  size_t counter_n_cards;
  for(counter_n_cards=0; counter_n_cards < hand->n_cards; counter_n_cards++){
    print_card(**(hand->cards+counter_n_cards));
    printf(" ");
      }
}

int deck_contains(deck_t * d, card_t c) {
  for(size_t i=0; i<d->n_cards;i++){
    if((c.value==(*(d->cards+i))->value) && (c.suit==(*(d->cards+i))->suit) )
      return 1;
    }
  return 0;
  }

void shuffle(deck_t * d){
 
  card_t * swap_pointer_cards;
  size_t rand_index;
  for (size_t i=0; i<d->n_cards; i++){
    rand_index = rand()%d->n_cards;
      swap_pointer_cards = d->cards[i];
      d->cards[i] = d->cards[rand_index];
      d->cards[rand_index]=swap_pointer_cards;
    }
}

void assert_full_deck(deck_t * d) {
  for(size_t i=0;i<d->n_cards;i++){
    assert_card_valid(*d->cards[i]);
    }
}
