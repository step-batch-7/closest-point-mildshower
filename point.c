#include <stdio.h>
#include <math.h>
#include "point.h"

double find_distance(point point1, point point2)
{
  return sqrt(pow((point1.x - point2.x), 2) + pow((point1.y - point2.y), 2));
}

void get_closest_food(point food_points[], int points_length, point current_location, point *closest_food_location)
{
  *closest_food_location = food_points[0];

  for (int index = 1; index < points_length; index++)
  {
    if (find_distance(current_location, food_points[index]) < find_distance(current_location, *closest_food_location))
      *closest_food_location = food_points[index];
  }
}