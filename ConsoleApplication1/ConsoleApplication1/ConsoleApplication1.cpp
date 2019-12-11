// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
/*Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
	Output : 3
	Explanation : The answer is "abc", with the length of 3.
	Example 2 :

	Input : "bbbbb"
	Output : 1
	Explanation : The answer is "b", with the length of 1.
	Example 3 :

	Input : "pwwkew"
	Output : 3
	Explanation : The answer is "wke", with the length of 3.
	Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
	*/

#include "stdafx.h"

using namespace std;




int substring(string str) {
	
	int len = str.length();
	int i = 0, ctr = 0, longest_str = 0;
	map<char, char>cstr;
	map<char, char>::iterator itr;
	char tchar = str[0];

	while (i <= len)
	{
		itr = cstr.find(str[i]);
		if ( itr == cstr.end())
		{
			cstr.insert({ str[i], str[i] });
			ctr++;		
		}
		else
		{
			if (longest_str < ctr)
			{
				longest_str = ctr;				
				
			}
			ctr = 0;
			cstr.clear();
		}

		i++;
	}
	
	return longest_str;
}

int main()
{
	string str = "abcabcbb";
	int lstr = substring(str);
	cout << "\nLongest substring of characters is " << lstr;
	getchar();
	return 0;
}