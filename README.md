## Compiler Lexer
#### Made by Ziyuan Liu, Peter Loomis

### To run
`make && ./lexer test1.c test2.c`

### output
the lexer program will output all the tokens and its token designations

### Correction of tests

we tested for the following and have witness the correctness of the outputs

- single line comment
- multiple line comment
- single line comment following non comment code
- standard identifiers that starts with only an alphabet or underscore
- non standard identifiers
- strings -- including non standard identifiers in quotes (which would qualify as a string)
