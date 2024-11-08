#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "Program.h"
#include "Processor.h"
#include "Display.h"

class Simulator {
private:
    Program program;
    Processor processor;
    Display display;

public:
    void loadProgram(const std::string &filename);
    void runProgram();
    void stepByStepExecution();
    void displayStatus() const;
};

#endif // SIMULATOR_H
