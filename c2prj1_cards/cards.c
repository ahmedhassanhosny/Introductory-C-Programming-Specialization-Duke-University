#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
  assert(c.value>=2 && c.value<=VALUE_ACE);
  assert(c.suit <=CLUBS && c.suit >=SPADES);
}

const char * ranking_to_string(hand_ranking_t r) {
  switch(r){
  case STRAIGHT_FLUSH: return "STRAIGHT_FLUSH";break;
  case FOUR_OF_A_KIND: return "FOUR_OF_A_KIND";break;
  case  FULL_HOUSE: return "FULL_HOUSE";break;
  case FLUSH: return "FLUSH";break;
  case STRAIGHT: return "STRAIGHT";break;
  case THREE_OF_A_KIND: return "THREE_OF_A_KIND";break;
  case TWO_PAIR: return "TWO_PAIR";break;
  case PAIR: return "PAIR";break;
  case NOTHING: return "NOTHING";break;
    }
  return "";
}

char value_letter(card_t c) {
  switch(c.value){
  case 2: return ('0'+2);break;
  case 3: return ('0'+3);break;
  case 4: return ('0'+4);break;
  case 5: return ('0'+5);break;
  case 6: return ('0'+6);break;
  case 7: return ('0'+7);break;
  case 8: return ('0'+8);break;
  case 9: return ('0'+9);break;
  case 10:return ('0');break;
  case VALUE_JACK: return('J');break;
  case VALUE_QUEEN: return('Q');break;
  case VALUE_KING: return('K');break;
  case VALUE_ACE: return('A');break;
  }    
  return 'x';
  

}
char suit_letter(card_t c) {
  switch(c.suit){
  case SPADES: return 's';break;  
  case HEARTS: return 'h';break;  
  case DIAMONDS: return 'd';break;
  case CLUBS: return 'c';break;
  case NUM_SUITS: return 'n';break;
  }
  return 'x';
  
}

void print_card(card_t c) {
  printf("%c%c",value_letter(c),suit_letter(c));
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  switch (value_let){
  case 'J': temp.value = VALUE_JACK;break;
  case 'Q': temp.value = VALUE_QUEEN;break;
  case 'K': temp.value = VALUE_KING;break;
  case 'A': temp.value = VALUE_ACE;break;
  case '0': temp.value = 10;break;
  default: temp.value = value_let-'0';break;
}
  switch (suit_let){
  case 's': temp.suit = SPADES;break;
  case 'h': temp.suit = HEARTS;break;
  case 'd': temp.suit = DIAMONDS;break;
  case 'c': temp.suit = CLUBS;break;
  }
  assert_card_valid(temp);
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  temp.suit = c/13;
  temp.value = c%13+2;
  card_from_letters(value_letter(temp),suit_letter(temp));
  return temp;
  }
