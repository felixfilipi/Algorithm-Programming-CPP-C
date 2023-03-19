#include "./include/Drawing.hpp"

int main (int argc, char *argv[])
{
  Drawing *draw = new Drawing();
  draw->half_pyramid_right_top(9);
  draw->half_pyramid_right_bottom(9);
  draw->half_pyramid_left_top(9);
  draw->half_pyramid_left_bottom(9);
  draw->rectangle(9);
  draw->top_pyramid(9);
  draw->right_pyramid(9);
  draw->bottom_pyramid(9);
  draw->left_pyramid(9);
  draw->outer_rectangle(9);
  draw->diamond(9);
  draw->house(9);
  delete draw;
  return 0;
}
