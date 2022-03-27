// a program for calculating the gallons of paint required
// the 4 walls to painted, excluding space for doorway and window
// Afham Bashir. 8.28.19
#include <iostream>
using namespace std; 
int main() {
  //assumming the dimensions may entered are only integers, but since the final area needed has conversion into sqaure feet, I used double instead of int 
double height_of_room; //Assuming the room has uniform height
double pair_of_walls_width;  //Assuming that the room has walls that are parrallel
double second_pair_of_walls_width;
double window_height; 
double window_width;
double window_area_sq_inch;
double gallons_of_paint;
double doorway_area_square_inches;
double area_of_walls;
double area_paintable; //area of walls- the doorways and window
  cout <<"Calculates the number of gallons of paint required to paint the room." <<endl;
  cout <<"Enter height of the room in inches: "; // the program will display asking the user to input the height
  cin >> height_of_room;  //the varaible that will be used to calculate the area of the walls will be assigned
  cout <<"Enter one pair of walls' width in inches: "; // the program prompts the user to enter the varaible used in calculated wall area. 
  cin >> pair_of_walls_width;//variable for the first pair of wall's will be assigned 
  cout <<"Enter other pair of walls' width in inches: "; //promting the user to insert the second width needed for calculation of wall's area.
  cin >> second_pair_of_walls_width; // assigning the variable for the second pair a value
   cout <<"Enter Height of Window in inches: "; //display a prompt for the user to put in window's height in inches
  cin >> window_height;//input assigns value to the window height varaible
  cout <<"Enter Width of window in inches: " ;//outputs, asking the user to enter the width of the window
  cin >> window_width;//input assigns a value to the second measurement needed to calculate area for the window. 
  doorway_area_square_inches=36*80;//calculation of the area of the doorway by length times widge, which 36*80 was given.
  window_area_sq_inch=window_height * window_width;//calculation of window's area in square inches by mulitplying the two variable of window width and window height
  area_of_walls=(height_of_room*pair_of_walls_width*2)+(height_of_room*second_pair_of_walls_width*2);//this calculates the areas of the walls in the room, ignoring the area taken up by the doorway and the window,which is done by multiplying the varaible for room height, by the varaiable for wall width, multipled by 2 (since there are two walls for one pair) and the operationg repeated for the other pair of walls. 
  area_paintable=(area_of_walls-window_area_sq_inch-doorway_area_square_inches)/144;//The area paintable is the area that will be painted, considering the doorway and window, That is calculated by area of the walls minus the area of the window minus the area of the doorway,then dividing the entire sum byy 144 is what converts the square inches into sqaure feet. 
  cout << "The area needing paint is " << area_paintable << " square feet." //outputs in sqaure feet the area that will need paint. 
  <<endl;
  gallons_of_paint=area_paintable/120;//This calculates the amount of gallons used, by dividing the area paintable by 120 ft. which is representative for feet per gallon the paint covers. 
  cout << "The amount of paint needed is " << gallons_of_paint << " gallons. " << endl;//outputing the number of gallons required. 
return 0;
}