#include "svdpi.h"
#include "Vour__Dpi.h"
#include "verilated.h"
#include "Vour.h"
#include <iostream>


int main() {
    Vour* top = new Vour;
    svSetScope(svGetScopeFromName("TOP.our"));

    top->publicSetBool(12); 
    top->eval();
    
    delete top;
    return 0;
}