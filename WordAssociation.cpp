/*
Word Association
Pawelski
4/12/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>
#include <string>

int main()
{
    char last_letter;
    std::string word, new_word;
    std::cout << "Enter a word >> ";
    std::cin >> word;
    last_letter = word[word.length() - 1];
    switch (last_letter)
    {
    case 'a':
        new_word = "ant";
        break;
    case 'b':
        new_word = "bee";
        break;
    case 'c':
        new_word = "cat";
        break;
    case 'd':
        new_word = "dodo";
        break;
    case 'e':
        new_word = "elephant";
        break;
    case 'f':
        new_word = "frog";
        break;
    case 'g':
        new_word = "goat";
        break;
    case 'h':
        new_word = "horse";
        break;
    case 'i':
        new_word = "iguana";
        break;
    case 'j':
        new_word = "jaguar";
        break;
    case 'k':
        new_word = "kangaroo";
        break;
    case 'l':
        new_word = "llama";
        break;
    case 'm':
        new_word = "moose";
        break;
    case 'n':
        new_word = "narwhal";
        break;
    case 'o':
        new_word = "octopus";
        break;
    case 'p':
        new_word = "penguin";
        break;
    case 'q':
        new_word = "quail";
        break;
    case 'r':
        new_word = "raccoon";
        break;
    case 's':
        new_word = "sloth";
        break;
    case 't':
        new_word = "turtle";
        break;
    case 'u':
        new_word = "unicorn";
        break;
    case 'v':
        new_word = "vole";
        break;
    case 'w':
        new_word = "whale";
        break;
    case 'x':
        new_word = "xeme";
        break;
    case 'y':
        new_word = "yak";
        break;
    case 'z':
        new_word = "zebra";
        break;
    default:
        std::cout << "Invalid character! The word needs to begin with a letter.\n";
        return 1;
    }
    std::cout << "I would say " << new_word << ".\n";
    return 0;
}
