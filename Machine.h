// Machine.h
#ifndef MACHINE_H
#define MACHINE_H

#include "Memory.h"
#include "Register.h"
#include "Instruction.h"
#include <vector>

class Machine {
public:
    Memory memory;
    Register registers;
    int program_counter = 0;
    bool halted = false;
    std::vector<Instruction*> instructions;

    Machine() : memory(256), registers(16) {}

    void loadProgram(const std::vector<Instruction*>& instrs) {
        instructions = instrs;
    }

    void fetchAndExecute() {
        while (!halted && program_counter < instructions.size()) {
            Instruction* instr = instructions[program_counter];
            program_counter++;
            instr->execute(*this);
        }
    }

    void halt() { halted = true; }
};

#endif
