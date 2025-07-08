#include <iostream>
#include <string>
using namespace std;
int main() {
	
	cout<<"*** concatenating of two strings ***\n\n";
	
    string str1, str2, result;

    // Getting input from the user
    cout << "Enter the first string: ";
    cin>>str1;

    cout << "Enter the second string: ";
     cin>>str2;

    // Concatenating the strings
    result = str1 + str2;

    // Displaying the result
    cout << "Concatenated string: " << result << endl;

    return 0;
}

