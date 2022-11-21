#include <iostream>
#include <fstream>
#include <build/settings/config.h>
using namespace std;

#define FRT_PRINT 0
#define FRT_SETOPP 1

namespace frtVM
{
     namespace lang
     {
         bool checkFunc(string line, string func);
         string getArgs(string line, string func);
     };

     namespace vm
     {
         namespace mem
         {
             class memory
             {
                 public:
                     char memory[MEMORY_LIMIT];
             };

             void setMemory(char byte, int loc, frtVM::vm::mem::memory *memory);
         };

         void vmStart(string file);
         void vmPutInMem(ifstream &file, frtVM::vm::mem::memory *memory);
         void execute(frtVM::vm::mem::memory *memory);
     };
};
