#include <iostream>
// # = is called preprocessor directive 
// preprocessor? = when we first comile a program, the compilation process involves first process as preprosessing , this preprocess is done by the pre-processor.

// The processor takes your cpp code and generates another cpp code that has all the declarations present in the iostream, which its processed all of cpp code, starting from the symbol "#".

//iostream = is a header file, that stand for i/p , o/p stream
using namespace std;
//namespaces are used to divide your large software or projects into multipal logical groups, 
//and one logical existing group is "std".
//std contains all the, standard libraries and all the standard things init, 
// so whenever you tryna use somethign standard, ex: cout is part of std, so as we are using cout here so we need to use: using namespace std
//when used: "using namespace std": it makes all the avilable things avilable in namespace avilable to your program 
int main()
//main function is where, your execution of software begins
/*
a function always creates a block of code in cpp, and is represtened by {}
*/
{
    cout <<"nigga"; // use 4 spaces whenevr you code for good presentation
    // cout is used to print something on standard output that is Monitor, its there in the iostrem header file
    /*
    cout is an object of ostream class, which is standard class for output stream 
    */
    return 0;
}