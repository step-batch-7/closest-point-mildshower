#include <stdio.h>
#include "point.h"

int main(void)
{
  point food_points[2] = {{5, 5}, {-5, 4}}, closest_food_location, curr_location = {0, 0};
  get_closest_food(food_points, 2, curr_location, &closest_food_location);
  printf("x: %d, y:%d", closest_food_location.x, closest_food_location.y);
  return 0;
}