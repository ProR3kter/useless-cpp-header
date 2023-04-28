#include "pure_hell.h"

// If statement
DataTypeBoolean i Equal true;                                                                // bool i = true;
IfStatementIf OpeningParentesis i EqualTo true ClosingParentesis OpeningCurlyBrackets        // if ( i == true ) {
    InputOutputStreamPrintLineFunction("i is a boolean with value 'true'");                  //     std::cout << "i is a boolean with value 'true'";
ClosingCurlyBrackets                                                                         // }
IfStatementElse OpeningCurlyBrackets                                                         // else {
    InputOutputStreamPrintLineFunction("i is a boolean with value 'false'");                 //     std::cout << "i is a boolean with value 'false'";
ClosingCurlyBrackets                                                                         // }

// Main Function + Hello world
DataTypeInteger main OpeningParentesis ClosingParentesis OpeningCurlyBrackets                // int main ( ) {
    InputOutputStreamPrintLineFunction("Hello World");                                       //     std::cout << "Hello World" << '\n';
ClosingCurlyBrackets                                                                         // }
