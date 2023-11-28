/*Name:Uche Hadassah
This program reads a word and a letter from the user, counts and outputs how many times the 
letter appeared in the word as well as the positions*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
int main()
{
	char word[MAX];
	char letter;
	char* p = word;
	cout << "Enter a word:";
	cin >> word;
	cout << "Enter a letter to search for:";
	cin >> letter;
	int count = 0;
	while (*p != '\0')
	{
		if (*p == letter)
			count++;
		p++;
	}
	if (count == 0)
		cout << letter << " does not appear in the word.";
	else
	{
		p = word;//Reset the pointer
		cout << "Letter found at index position(s) ";
		for (int i = 0; i < strlen(word); i++)
		{
			if (*p == letter)
				cout << i << ",";
			p++;
		}
		cout << "Letter found " << count << " times.";
	}
}
