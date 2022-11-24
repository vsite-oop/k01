#include "app.h"

string::string(const char* text) {
    int size = strlen(text);
    mStr = new char[size];
    for (int i = 0; i < size; i++) {
        mStr[i] = text[i];
    }
}

unsigned int string::length() const
{
    unsigned int cnt = 0;
    int size = strlen(mStr);

    for (int i = 0; i < size; i++) {
        cnt++;
    }

    return cnt;
}

string string::rev_sub(int a, int b) const
{
    char* text = new char[a];

    for (int i = 0; i < a; i++) {
        text[i] = mStr[i];
    }

    char* reverseText = new char[b];

    int index = 0;
    for (int i = a - 1; a >= (a - b); i--) {
        reverseText[index] = text[i];
    }

    return reverseText;
}

void string::print(std::stringstream& ss) const
{
    ss << mStr;
}
