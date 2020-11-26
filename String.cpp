//
// Created by user.v2.0 on 25.11.2020.
//

#include "String.h"
#include <iostream>

String::String() {
    char_array = new char[1];
    char_array['\0'];
    length = 0;
}

String::String(char *char_array, int length) {
    this->char_array = new char[length + 1];
    this->length = length;
    for (int i = 0; i < length; ++i) {
        this->char_array[i] = *(char_array + i);
    }
    this->char_array[length] = '\0';
}

String::String(const String &string) {
    char_array = new char[string.length + 1];
    length = string.length;
    for (int i = 0; i < length; ++i) {
        *(char_array + i) = *(string.char_array + i);
    }
    *(char_array + length) = '\0';
}

String::~String() {
    delete[] char_array;
}

String String::operator+(const String &rhs) const {
    char *sum_char_array = new char[length + rhs.length + 1];
    int sum_length = length + rhs.length;
    for (int i = 0; i < length; ++i) {
        *(sum_char_array + i) = *(char_array + i);
    }
    for (int i = 0; i < rhs.length; ++i) {
        *(sum_char_array + i + length) = *(rhs.char_array + i);
    }
    *(sum_char_array + rhs.length + length) = '\0';
    //elete this;
    return String(sum_char_array, sum_length);
}

String String::operator+=(const String &rhs) {
    return *(this) + rhs;
}


char &String::operator[](int index) const {
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

std::ostream &operator<<(std::ostream &os, const String &string) {
    for (int i = 0; i < string.length; ++i) {
        os << string[i];
    }
    return os;
}


