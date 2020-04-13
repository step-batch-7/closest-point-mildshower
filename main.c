#include <stdio.h>
#include "point.h"

int main(void)
{
  point food_points[5] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}}, closest_food_location;
  point curr_locations[5] = {{18, 86}, {97, 27}, {69, 7}, {10, 94}, {36, 27}};

  for (int index = 0; index < 5; index++)
  {
    get_closest_food(food_points, 5, curr_locations[index], &closest_food_location);
    print_curr_and_food_location(curr_locations[index], closest_food_location);
  }

  return 0;
}