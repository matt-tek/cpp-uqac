#ifndef UTILS_H
#define UTILS_H

#pragma once

#include <string>
#include <iostream>

template <typename T1, typename T2>
bool compareSurface(T1& bien1, T2& bien2) {
    return bien1.getSurface() > bien2.getSurface();
}

#endif // UTILS_H
