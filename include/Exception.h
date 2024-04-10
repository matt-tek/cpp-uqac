#ifndef EXCEPTION_H
#define EXCEPTION_H

#pragma once

#include <string>
#include <iostream>

// Définition de la classe Exception, héritant de std::exception
class Exception : public std::exception {
private:
    std::string message;    // Message d'exception

public:
    // Constructeur de la classe Exception
    Exception(const std::string& message) : message(message) {}

    // Méthode what() pour obtenir le message d'exception
    virtual const char* what() const throw() {
        return message.c_str();
    }
};

#endif // EXCEPTION_H
