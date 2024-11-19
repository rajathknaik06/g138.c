/*Geetha loves playing word games with her friends. One day, she writes a word on the board and challenges her friends to determine whether the given word is a palindrome or not. A palindrome is a word that reads the same backwards as forward.



Help them to accomplish the task.

Input format :
The input consists of a string S, representing the word written by Geetha.

Output format :
The output prints a single line that states whether the given word is a palindrome or not in the following format:

If the word is a palindrome, print: "[S] is a palindrome".
Otherwise, print "[S] is not a palindrome".
*/

#include <stdio.h>

int main() {
    char text[13];
    int begin, middle, end, length = 0;
    scanf("%s", text);

    while (text[length] != '\0') {
        length++;
    }

    end = length - 1;
    middle = length / 2;

    for (begin = 0; begin < middle; begin++) {
        if (text[begin] != text[end]) {
            printf("%s is not a palindrome", text);
            break;
        }
        end--;
    }

    if (begin == middle) {
        printf("%s is a palindrome", text);
    }

    return 0;
}

//another method

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(const char text[]) {
    int length = 0;
    while (text[length] != '\0') {
        length++;
    }

    int end = length - 1;
    int middle = length / 2;

    for (int begin = 0; begin < middle; begin++) {
        if (text[begin] != text[end]) {
            return false;
        }
        end--;
    }

    return true;
}

int main() {
    char text[13];
    scanf("%s", text);

    if (isPalindrome(text)) {
        printf("%s is a palindrome", text);
    } else {
        printf("%s is not a palindrome", text);
    }

    return 0;
}



//another method


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[13];
    cin >> text;

    int length = std::strlen(text);
    int end = length - 1;
    int middle = length / 2;

    bool isPalindrome = true;
    for (int begin = 0; begin < middle; begin++) {
        if (text[begin] != text[end]) {
            isPalindrome = false;
            break;
        }
        end--;
    }

    if (isPalindrome) {
        cout << text << " is a palindrome";
    } else {
        cout << text << " is not a palindrome";
    }

    return 0;
}
