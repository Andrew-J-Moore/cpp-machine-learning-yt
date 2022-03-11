#ifndef __DATA_H
#define __DATA_H


#include <vector>
#include "stdint.h"
#include "stdio.h"

class Data {
    std::vector<uint8_t> *feature_vector;
    uint8_t label;
    int enumerated;
};


#endif