#ifndef PROGRAM_H
#define PROGRAM_H

#include "Instruction.h"
#include <vector>
#include <string>

class Program {
private:
    std::vector<Instruction> instructions;
    int currentInstruction = 0;

public:
    bool loadFromFile(const std::string &filename);
    Instruction getNextInstruction();
    bool hasMoreInstructions() const;
};

#endif // PROGRAM_H

