// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

#define MAX 26 

// Function to return the sorted string 
string getSortedString(string s, int n) 
{ 

	// To store the frequencies of the 
	// lowercase and the uppercase 
	// characters in the given string 
	int lower[MAX] = { 0 }; 
	int upper[MAX] = { 0 }; 

	for (int i = 0; i < n; i++) { 

		// If current character is lowercase then 
		// increment its frequency in 
		// the lower[] array 
		if (islower(s[i])) 
			lower[s[i] - 'a']++; 

		// Else increment in the upper[] array 
		else if (isupper(s[i])) 
			upper[s[i] - 'A']++; 
	} 

	// Pointers that point to the smallest lowercase 
	// and the smallest uppercase characters 
	// respectively in the given string 
	int i = 0, j = 0; 
	while (i < MAX && lower[i] == 0) 
		i++; 

	while (j < MAX && upper[j] == 0) 
		j++; 

	// For every character in the given string 
	for (int k = 0; k < n; k++) { 

		// If the current character is lowercase 
		// then replace it with the smallest 
		// lowercase character available 
		if (islower(s[k])) { 
			while (lower[i] == 0) 
				i++; 
			s[k] = (char)(i + 'a'); 

			// Decrement the frequency 
			// of the used character 
			lower[i]--; 
		} 

		// Else replace it with the smallest 
		// uppercase character available 
		else if (isupper(s[k])) { 
			while (upper[j] == 0) 
				j++; 
			s[k] = (char)(j + 'A'); 

			// Decrement the frequency 
			// of the used character 
			upper[j]--; 
		} 
	} 

	// Return the sorted string 
	return s; 
} 

// Driver code 
int main() 
{ 
	string s = "gEeksfOrgEEkS"; 
	int n = s.length(); 

	cout << getSortedString(s, n); 

	return 0; 
} 
