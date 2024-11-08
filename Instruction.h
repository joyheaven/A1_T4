#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <string>

class Instruction {
public:
    std::string opcode;
    int operand1, operand2;

    Instruction(std::string op, int op1, int op2 = 0);
    bool validate();
};

#endif // INSTRUCTION_H
