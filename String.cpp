//
// Created by user.v2.0 on 25.11.2020.
//

#include "String.h"

String::String() {
    char_array = new char[0];
    length = 0;
}

String::String(char *char_array, int length) {
    this->length = length;
    for (int i = 0; i < length; ++i) {
        this->char_array[i] = *(char_array+i);
    }
}

String::String(const String &string) {
    length = string.size();
    for (int i = 0; i < length; ++i) {
        *(char_array+i) = *(string.char_array+i);
    }
}

String::~String() {
    delete[] char_array;
}

String &String::operator+=(const String &rhs) {
    *(this) = *(this)+rhs;
    return *(this);
}

String String::operator+(const String &rhs) const {
    char *sum_char_array = new char[length + rhs.length];
    int sum_length = length + rhs.length;
    for (int i = 0; i < length; ++i) {
        *(sum_char_array+i) = *(char_array+i);
    }
    for (int i = length; i < length+rhs.length; ++i) {
        *(sum_char_array+i) = *(char_array+i);
    }
    return String(sum_char_array ,sum_length);
}

char& String::operator[](int index) {
    return *(char_array + index);
}

String &String::operator=(const String &rhs) {
    char_array = new char[rhs.length];
    length = rhs.length;
    for (int i = 0; i < length; i++) {
        *(char_array + i) = *(rhs.char_array + i);
    }
    return *(this);
}

int String::size() const {
    return length;
}


