#include <iostream>

using namespace std;  //Command to avoid typing std:: in front of cout and endl commands
int main( ) {
    cout << "DC Cruz June 16th 2017"<<endl <<endl;
    int height=0, feet=0, inches=0;
    cout << "What is your height in inches (example 68): " << endl;
    cin >> height;
    feet = height / 12;
    inches = height % 12;
    cout << "My Height is " << feet << " feet and " << inches << " Inches " << endl << endl;
    return 0; // Ends program
}
