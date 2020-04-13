/* 
You are a single celled organism whose location is represented in two dimensions.
You have several food targets around you, whose locations are also represented in two dimensions.

Write a program, which when given the above data can determine the food target closest to the single celled organism.
Assuming that there are five food targets at:
    [18 76] [19 66] [89 57] [9 71] [55 38]

Location of organism: [18 86],  Closest food target : [18 76]
Location of organism: [97 27],  Closest food target : [89 57]
Location of organism: [69 7],   Closest food target : [55 38]
Location of organism: [10 94],  Closest food target : [18 76]
Location of organism: [36 27],  Closest food target : [55 38]
*/

#define PRINT_POINT(p) printf("[%d %d]", p.x, p.y)
#define PRINT_NEW_LINE printf("\n")
#define FIRST_ELEMENT(arr) arr[0]

typedef struct
{
  int x;
  int y;
} point;

typedef point *point_ptr;

void print_current_and_food_location(point, point);

double find_distance(point, point);

void get_closest_food(point food_points[], int points_length, point current_location, point_ptr closest_food_location);
