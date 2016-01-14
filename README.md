## Compiler Lexer
#### Made by Ziyuan Liu, Peter Loomis

### To run
`make && ./lexer test1.c test2.c`

### output
the lexer program will output all the tokens and its token designations

### Correction of tests
Our tests are in the following files:

test1.c
- single line comment
- multiple line comment
- single line comment following non comment code
- lexer should alert the user of unrecognized symbols in the input
- int, newline, and symbol tokens
- test keywords (if, else, int, print)

test2.c
- standard identifiers that starts with only an alphabet or underscore
- non-standard identifiers
- strings -- including non standard identifiers in quotes (which would qualify as a string)
- test keywords (read, void, for, return)
