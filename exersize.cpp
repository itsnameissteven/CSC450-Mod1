#include <iostream>
#include <string>

using namespace std;

int main() {
  // Stored string variables
  string firstName = "Steven";
  string lastName = "Mancine";
  string address = "123 Main st";
  string city = "Denver";
  string zipCode = "11221";
  string output = firstName + " " + lastName + "\n" + address + ", " + city + " " + zipCode;

  // Output
  cout << output << endl;

  // Exit program
  return 0;
}