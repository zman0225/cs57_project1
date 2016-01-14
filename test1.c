/* this is a multiline comment **88 **8
line two
line three

**/

// a simple single line comment

int main(int argc){

    if (argc == 0) { // single line comment on same line as code
        /* code */
    }

    // unrecognized symbols, print Keyword
    print("the~.....~re are %4d arguments", --argc);

    // int token
    int numApples = 44;

    // newline token
    char *newlineStr = "\n";

    // symbol tokens
    // GTE
    if (44 >= 3) {
        /* code */
    }

    // LTE
    if (3 <= 2) {
        /* code */
    }

    // EQ, NEQ, AND, OR
    if ('a' == 'a' || (4 != 2 && 2 != 4)) {
        /* code */
    }

    // increment, decrement
    int i = 4;
    int j = 4;
    i++;
    j--;
}
