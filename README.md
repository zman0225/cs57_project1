## Compiler Lexer
#### Made by Ziyuan Liu, Peter Loomis

### To run
`make && ./lexer test1.c test2.c`

### output
the lexer program will output all the tokens and its token designations

### Correction of tests
we tested for the following inputs for correctness:

test1.c
- single line comment
- multiple line comment
- lexer should alert the user of unrecognized symbols in the input
- standard identifiers that starts with only an alphabet or underscore
- int, newline, and symbol tokens

test2.c
- single line comment following non comment code

- non standard identifiers
- strings -- including non standard identifiers in quotes (which would qualify as a string)
