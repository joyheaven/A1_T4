// VoleProgram.h
#ifndef VOLEPROGRAM_H
#define VOLEPROGRAM_H

#include "Instruction.h"
#include <fstream>
#include <string>
#include <vector>

class VoleProgram {
public:
    std::vector<Instruction*> instructions;

    VoleProgram(const std::string& file_path) {
        std::ifstream file(file_path);
        std::string program;
        if (file.is_open()) {
            file >> program;
            file.close();

            for (size_t i = 0; i < program.size(); i += 4) {
                char opcode = program[i];
                std::string operands = program.substr(i + 1, 3);
                Instruction* instr = createInstruction(opcode, operands);
                instructions.push_back(instr);
            }
        }
    }

    std::vector<Instruction*> getInstructions() {
        return instructions;
    }

private:
    Instruction* createInstruction(char opcode, const std::string& operands) {
        switch (opcode) {
            case '1': return new LoadInstruction(opcode, operands);
            case '3': return new StoreInstruction(opcode, operands);
            case '5': return new AddInstruction(opcode, operands);
            case 'C': return new HaltInstruction(opcode, operands);
            default: return nullptr; // Handle invalid instructions if necessary
        }
    }
};

#endif
