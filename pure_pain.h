#include <iostream>
#define OpeningCurlyBrackets    {
#define ClosingCurlyBrackets    }
#define OpeningParentesis       (
#define ClosingParentesis       )
#define IfStatementElseIf       else if
#define ExclamationMark         !
#define DataTypeInteger         int
#define IfStatementElse         else
#define DataTypeBoolean         bool
#define	DataTypeString          const char*
#define DataTypeDouble          double
#define IfStatementIf           if
#define DataTypeLong            long
#define DataTypeVoid            void
#define GreaterThan             >
#define NotEqualTo              !=
#define LowerThan               <
#define EqualTo                 ==
#define Equal                   =

void SystemExecuteCommandFunction(const char* Command) {
	system(Command);
}

void InputOutputStreamPrintLineFunction(const char* Text) {
	std::cout << Text << '\n';
}
