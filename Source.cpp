// Hovhannes Margaryan

/* Pseudocode
 Display Welcome MSG
 Create string planet variable for new planet name
 Create char selection variable
 Create double variables distances, weight, speed, in_time, in_days, in_years, surfGrav, distSun, weightOnNewPlanet;
 Create constant variable for EARTH_DISTANCE = 96e6 (e6=1000000)
 Display second part of MSG
 Display menu a to i
 Display "Select a planet to travel to or q to quit the program:"
 if selection = a to i
 {
    Display "Please enter your weight on Earth:"
    Display "Please enter your speed in mph"
 }
 else if selection = q
   {
   Display message "You selected Quit. Bye Bye "
   } 
 else
     {
      Display message "Invalid. Please try again !"
     }

 weightOnNewPlanet = Surface Gravity * weight of user 
    Trivel distance = distance of planet from sun - distance of planet
    Trivel hours = Travel distance / speed
    Travel days = hours / DAY(24)
    Travel years = days / YEAR(24*365)
Display msgs
*/


#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;


int main()
{
    string planet;
    char selection;
    double distances, weight, speed, in_time, in_days, in_years, surfGrav, distSun, weightOnNewPlanet;
    const double EARTH_DISTANCE = 93e6;
    
    cout << "Welcome to INTERPLANETARY TRAVEL PROGRAM!\n";
    cout << "This program enables you to find out\n";
    cout << "your travel time to the planet\n";
    cout << "you want to travel to as well as your weight on there.\n";
    cout << "Please enjoy the program and hope you'll find the perfect planet for you!\n";
    cout << "\n\n";
    cout << "INTERPLANETARY TRAVEL MENU\n";
    cout << "---------------------------\n";

    cout << "a) Mercury\n";
    cout << "b) Venus\n";
    cout << "c) Earth\n";
    cout << "d) Mars\n";
    cout << "e) Jupiter\n";
    cout << "f) Saturn\n";
    cout << "g) Uranus\n";
    cout << "h) Neptune\n";
    cout << "i) Pluto\n";
    cout << "q) Quit\n";
    cout << "\n";
    cout << "Select a planet to travel to or q to quit the program: \n";
    cin >> selection;
    cout << setprecision(2) << fixed;

    if (selection >= 'a' && selection <= 'i')  
    {  
        cout << "Please enter your weight on Earth: \n";
        cin >> weight;
        cout << "Please enter your speed in mph: \n";
        cin >> speed;

        if (selection == 'a')
        {
            planet = "Mercury";
            surfGrav = 0.27;
            distSun = 36e6;
        }

        else if (selection == 'b')
        {
            planet = "Venus";
            surfGrav = 0.86;
            distSun = 67e6;
        }
        else if (selection == 'c')
        {
            planet = "Earth";
            surfGrav = 1.00;
            distSun = 93e6;
        }
        else if (selection == 'd')
        {
            planet = "Mars";
            surfGrav = 0.37;
            distSun = 141e6;
        }
        else if (selection == 'e')
        {
            planet = "Jupiter";
            surfGrav = 2.64;
            distSun = 483e6;
        }
        else if (selection == 'f')
        {
            planet = "Saturn";
            surfGrav = 1.17;
            distSun = 886e6;
        }
        else if (selection == 'g')
        {
            planet = "Uranus";
            surfGrav = 0.92;
            distSun = 1782e6;
        }
        else if (selection == 'h')
        {
            planet = "Neptune";
            surfGrav = 1.44;
            distSun = 2793e6;
        }
        else if (selection == 'i')
        {
            planet = "Pluto";
            surfGrav = 0.063;
            distSun = 3670e6;
        }

        weightOnNewPlanet = weight * surfGrav;
        distances = abs(EARTH_DISTANCE-distSun);
        in_time = distances / speed;
        in_days = in_time / 24;
        in_years = in_time / (24 * 365);

        cout << "INTERPLANETARY TRAVEL: " << " Earth to " << planet <<  endl;
        cout << "---------------------------------------------------\n";
        cout << "Your weight on "<<planet<<": " << weightOnNewPlanet << " lbs" << endl;
        cout << "\n";

        cout << "Your travel time to " << planet << ":\n";
        cout << "\tIn Hours: "<<in_time<<" hours\n";
        cout << "\tIn Days: " << in_days << " days\n";
        cout << "\tIn Years: " << in_years << " years\n";

    }
    else if (selection == 'q')
    {
        cout << "You selected Quit. Bye Bye \n";
    }

    else
    {
        cout << "Invalid. Please try again !";
    }

	return 0;
}