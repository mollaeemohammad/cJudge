#include "TestCaseGenExample.h"

void useGenerator() {
    // these things may be get from user
    cFilePath = "someWhere/cFileDir";
    cFileName = "hereIAmCFile.c";
    // Input files in this path are made before even we run the program
    // the input files must be made by user
    inputsPath = "someOtherPlace/inputs";
    outputsPath = "someOtherPlace/outputs";
    if (generate(cFilePath, cFileName, inputsPath, outputsPath)){
        print("Generate was successful\n");
        // if any problem with the path or name of file or any thing else will be shown as its alarm then the
        // result of generate function is False
    }
}