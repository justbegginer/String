//
// Created by user.v2.0 on 25.11.2020.
//

#ifndef STRING_STRING_H
#define STRING_STRING_H


class String {
private:
    char *char_array;
    int length;
public:
    String();
    String(char *char_array , int length);
    String(const String& string);
    ~String();
    String operator+(const String &rhs) const;
    String& operator+=(const String &rhs);
    char& operator[](int index);
    String &String::operator=(const String &rhs);
    int size()const;
};


#endif //STRING_STRING_H
