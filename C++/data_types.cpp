#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int entero;
    double doble;
    string frase;
    
    // Read and save an integer, double, and String to your variables.
    cin >> entero;
    cin >> doble;
    
    //getline function can read a string with whitespaces, ws = white space
    getline(cin >> ws, frase);
    
    // Note: If you have trouble reading the entire string, please go back and review        the Tutorial closely.
    /*cout << entero << endl;
    cout << doble << endl;
    cout << frase << endl;*/
    
    // Print the sum of both integer variables on a new line.
    cout << entero + i<< endl;
    
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << doble + d << endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
}
    cout << s + frase << endl;

    return 0;
