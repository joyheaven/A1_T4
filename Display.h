#ifndef DISPLAY_H
#define DISPLAY_H

#include "Processor.h"

class Display {
public:
    void showStatus(const Processor &processor) const;
};

#endif // DISPLAY_H
