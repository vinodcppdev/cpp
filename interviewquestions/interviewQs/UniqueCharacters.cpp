#include <iostream>
#include <bitset>
#include <algorithm>
#include "UniqueCharacters.h"
using namespace std;

/*
Approach 1 – Brute Force technique: Run 2 loops with variable i and j. Compare str[i] and str[j]. If they become equal at any point, return false.
Time Complexity: O(n2) 

*/
bool UniqueCharacters::IsUniqueBruteForce(string s)
{
	int n = s.length();
	for (int i = 0; i < n; ++i)
	{
		int charIdx = s[i] - 'a';
		for (int j = i + 1; j < n; ++j)
		{
			if (s[i] == s[j])
				return false;
		}
	}
	return true;
}
/*
Approach 2 – Sorting : Using sorting based on ASCII values of characters
Time Complexity : O(n log n)
*/
bool UniqueCharacters::IsUniqueSort(string s)
{
	std::sort(s.begin(), s.end());
	int n = s.length();
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == s[i + 1])
			return false;
	}
	return true;
}

bool UniqueCharacters::IsUniqueBitset(string s)
{
	int n = s.length();
	std::bitset<256> b;
	for (int i = 0; i < n; ++i)
	{
		int charIdx = s[i] - 'a';
		if (b[charIdx] == true)
			return false;
		else
			b[charIdx] = true;
	}
	return true;
}


