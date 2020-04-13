#include <stdio.h>
#include <stdlib.h>
#include "point.h"

int find_manhattan_distance(struct Point point1, struct Point point2)
{
  return abs(point1.x - point2.x) + abs(point1.y - point2.y);
}

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location)
{
  *closest_food_location = food_points[0];

  for (int index = 1; index < points_length; index++)
  {
    if (find_manhattan_distance(current_location, food_points[index]) < find_manhattan_distance(current_location, *closest_food_location))
      *closest_food_location = food_points[index];
  }
}