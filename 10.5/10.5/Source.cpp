#include <iostream>
#include <string>

using namespace std;



bool isPalindrome(const string &s);

int main()
{
	// initializing a string
	string s;
	cout << "Enter somne letters: ";
	//inputting a string
	cin >> s;
// check the funtion to see if it returned true or false
	if (isPalindrome(s))
		cout << s << " YAY! a palindrome" << endl;
	else
		cout << s << "  not a palindrome" << endl;

	return 0;
}

bool isPalindrome(const string &s)
{
	// setting first to the first char in the string .
	int first = s.length() - 1 ;
	
	// last inilizied to the last char int he string
	// keeps going as long as last is less than first
	// last increments one time every loop around
	for (int last = 0; last < first; last++)
	{
		// check to see if last is different than first
		//if it is then its not a palindrome
		if (s[last] != s[first])
		{
			return false;
		}
		// checks to see if last and first are the same
		//if the are it increments first by one
		else if (s[last] == s[first]) {
			first++;
		}
	}
	
	return true;
}