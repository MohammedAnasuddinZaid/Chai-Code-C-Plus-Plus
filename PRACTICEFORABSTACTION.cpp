

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//ABSTRACT CLASS
class Tea{
public:
    virtual void makingtea()=0;
    virtual void brew()=0;
    virtual void mixing()=0;

    void viewdetailes(){

        makingtea();
        brew();
        mixing();
    }

};

class GREENTEA: public Tea{
public:
    void makingtea() override {
        cout << "TEA IS BEING MADE";
    }  
    void brew() override {
        cout << "TEA IS BEING brewed";
    }  
    void mixing() override {
        cout << "TEA IS BEING mixed";
    }  

};

class Masalachai : public Tea{
public:
    void makingtea() override {
        cout << "TEA IS BEING MADE";
    }  
    void brew() override {
        cout << "TEA IS BEING brewed";
    }  
    void mixing() override {
        cout << "TEA IS BEING mixed";
    }  
};

int main(){

    GREENTEA greentea;
    Masalachai masalachai;

    greentea.viewdetailes();



    return 0;
}

// /*========================================================================
//              C++ PROGRAM EXECUTION LOGIC (STEP-BY-STEP)
// ========================================================================

// STEP 1: BLUEPRINT VERIFICATION (Compilation Phase)
// ------------------------------------------------------------------------
// * The compiler reads the abstract base class 'Tea'. Because 'makingtea()', 
//   'brew()', and 'mixing()' end with '= 0', they are marked as pure 
//   virtual functions.
// * The compiler verifies that child classes ('GREENTEA' and 'Masalachai') 
//   fully override and implement all three pure virtual methods. If any 
//   were missing, compilation would fail here.

// STEP 2: MEMORY ALLOCATION (Entering main)
// ------------------------------------------------------------------------
// * The execution starts inside the main() function.
// * "GREENTEA greentea;" -> Memory is allocated for the 'greentea' object. 
//   It receives a hidden virtual pointer (vptr) that links it to the 
//   'GREENTEA' Virtual Table (vtable).
// * "Masalachai masalachai;" -> A separate object is created in memory 
//   with a vptr linking it to the 'Masalachai' vtable.

// STEP 3: CALLING THE TEMPLATE METHOD
// ------------------------------------------------------------------------
// * The program executes "greentea.viewdetailes();".
// * Control leaves main() and jumps directly into the 'Tea' base class, 
//   where the non-virtual 'viewdetailes()' function is defined.

// STEP 4: RUNTIME POLYMORPHISM (Dynamic Binding Loop)
// ------------------------------------------------------------------------
// Inside 'viewdetailes()', the computer processes three lines sequentially:

// 1. Executing "makingtea();"
//    -> The CPU encounters the virtual call. 
//    -> It checks the calling object's ('greentea') vptr.
//    -> It resolves the address to GREENTEA::makingtea().
//    -> Jumps to child class, runs cout << "TEA IS BEING MADE";, and returns.

// 2. Executing "brew();"
//    -> The CPU checks the object's vptr again.
//    -> It resolves the address to GREENTEA::brew().
//    -> Jumps to child class, runs cout << "TEA IS BEING brewed";, and returns.

// 3. Executing "mixing();"
//    -> The CPU checks the object's vptr a final time.
//    -> It resolves the address to GREENTEA::mixing().
//    -> Jumps to child class, runs cout << "TEA IS BEING mixed";, and returns.

// STEP 5: PROGRAM EXIT
// ------------------------------------------------------------------------
// * The 'viewdetailes()' function finishes its execution block.
// * Control returns to main() at the next line.
// * "return 0;" is executed. The objects 'greentea' and 'masalachai' are 
//   popped off the stack (destroyed), and the program terminates cleanly.
// ========================================================================*/