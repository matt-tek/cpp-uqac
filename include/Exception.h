#ifndef EXCEPTION_H
#define EXCEPTION_H

#pragma once
#include <string>
#include <iostream>

class Exception : public std::exception {
private:
    std::string message;
public:
    Exception(const std::string& message) : message(message) {}
    virtual const char* what() const throw() {
        return message.c_str();
    }
};

#endif // EXCEPTION_H
