// Lab 3 icecream.cpp 
// This program calculate total icecream sales by product.
// Yasim Cruz

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{  
   // DEFINE NAMED CONSTANTS HERE TO HOLD THE PRICES OF THE 3 SIZES OF ICE CREAM CONES. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE. 
   double delightful = 1.49;
   double doubleDelight = 2.49;
   double tripleDelight = 3.49;
   
   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE NAME AND AN APPROPRIATE DATA TYPE. 
   int oneScoop,
   twoScoop,
   threeScoop,
   scoopTotal;
   
   float singleTotal,
   doubleTotal,
   tripleTotal,
   salesTotal;

   // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION THE PROGRAM NEEDS TO GET FROM THE USER.
   cout << "Number of single scoop cones sold: ";
   cin >> oneScoop;
   cout << "Number of double scoop cones sold: ";
   cin >> twoScoop;
   cout << "Number of triple scoop cones sold: ";
   cin >> threeScoop; 

   // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS AND ASSIGN THE RESULTS TO VARIABLES.
   singleTotal = static_cast<float>(oneScoop * delightful);
   doubleTotal = static_cast<double>(twoScoop * doubleDelight);
   tripleTotal = static_cast<double>(threeScoop * tripleDelight);
   scoopTotal = oneScoop + twoScoop + threeScoop;
   salesTotal = static_cast<double>(singleTotal + doubleTotal + tripleTotal);
   
   
   // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
   cout << endl;
   std::cout << std::fixed << std::setprecision(2);
   cout << "DeLIGHTful cones       " << setw(5) << right << oneScoop << "   " << "$" << setw(7) << right << singleTotal << endl;
   cout << "Double DeLIGHT cones   " << setw(5) << right << twoScoop << "   " << "$" << setw(7) << right << doubleTotal << endl;
   cout << "Triple DeLIGHT cones   " << setw(5) << right << threeScoop << "   " << "$" << setw(7) << right << tripleTotal << endl;
   cout << "Total                  " << setw(5) << right << scoopTotal << "   " << "$" << setw(7) << right << salesTotal << endl;
   
      
   return 0;
}
