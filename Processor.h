#ifndef PROCESSOR_H
#define PROCESSOR_H

#include "Instruction.h"
#include <iostream>

class Processor {
private:
    int registers[8] = {0};
    int PC = 0;
    int IR = 0;
    bool halted = false;

public:
    void setIR(int value);
    bool isHalted() const;
    void executeInstruction(const Instruction &instruction);
    void displayRegisters() const;
};

#endif // PROCESSOR_H
