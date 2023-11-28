/*Counting letters: Use pointer arithmetic to write a program that reads a word and a 
letter from the user and counts the number of times the letter occurred in the string. The 
program should output the index position(s) where it found the letter, as well as print the 
number of times it found it. Example:
Enter a word: anna
Enter a letter: n
Letter found at index position(s) 1, 2
Letter found 2 times.*/
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
	cout << "Enter the letter you wish to search for:";
	cin >> letter;
	int count = 0;
	while (*p != '\0')
	{
		if (*p == letter)
			count++;
		p++;
	}
	cout << " The letter " << letter << " appeared " << count << " times in the word, at position(s) ";
	while (*p != '\0')
	{
		if (*p == letter)
			cout << p <<" ";
		p++;
	}
}
