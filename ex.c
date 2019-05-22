#include "create.h"

typedef struct {
  int x;
  int y;
} Point;
int main(void){
  //Before...
  Point* myPoint = (Point*)malloc(sizeof(Point));
  //After...
  Point* myPoint = create(Point);
}
