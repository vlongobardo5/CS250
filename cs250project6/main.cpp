#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

bool isPalindrome(string word, int start, int last)
{
    if (start >= last)
        return true;
    if(word[start] != word[last])
        return false;
    return isPalindrome(word, ++start, --last);
}


int main()
{
try{

    string word;
    cout << "Enter a word: " << endl;
    cin >> word;
    char letter = word[0];
    if (!isalpha(letter))
	{
		throw runtime_error("detected non-letter, please input only letters.");

	}
	if (isPalindrome(word, 0, word.length()-1))
    {
        cout << word << " is a palindrome!" << endl;
    }
    else {
        cout << word << " is not a palindrome!" << endl;
    }
}
catch (runtime_error e){
cout << endl << "Warning: " << e.what() << endl;
}
    return 0;
}
