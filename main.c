#include <stdio.h>
#include "point.h"

int main(void)
{
  point_list food_points = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  point_list current_locations = {{18, 86}, {97, 27}, {69, 7}, {10, 94}, {36, 27}};
  point closest_food_location;

  for (int index = 0; index < ARRAY_LENGTH(current_locations); index++)
  {
    get_closest_food(food_points, ARRAY_LENGTH(food_points), current_locations[index], &closest_food_location);
    print_current_and_food_location(current_locations[index], closest_food_location);
  }

  return 0;
}