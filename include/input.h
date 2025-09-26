#ifndef INPUT_H
#define INPUT_H

#include "output.h"

enum editorKey {
  ARROW_LEFT = 1000,
  ARROW_RIGHT,
  ARROW_UP,
  ARROW_DOWN
};



void dashMoveCursor(int key);
void dashProcessKeypress();
void handleSpacePress(struct Cell *curr_cell);
void handleRPress(struct Cell *curr_cell);

#endif