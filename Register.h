// Register.h
#ifndef REGISTER_H
#define REGISTER_H

#include <vector>

class Register {
public:
    std::vector<int> values;
    Register(int size = 16) : values(size, 0) {} // Initialize 16 registers set to 0

    int read(int reg_num) {
        return values[reg_num];
    }

    void write(int reg_num, int value) {
        values[reg_num] = value;
    }
};

#endif
