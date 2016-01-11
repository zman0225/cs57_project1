enum yytokentype{
    STD_ID_T=258,
    INT_T,
    STR_T,

    //Keyword reserves
    // if|else|while|return|for|void|read|print|int
    KW_IF_T,
    KW_ELSE_T,
    KW_WHILE_T,
    KW_RETURN_T,
    KW_FOR_T,
    KW_VOID_T,
    KW_READ_T,
    KW_PRINT_T,
    KW_INT_T,

    // double character symbols
    //<= >= == != ++ -- && ||
    SYM_LTE_T,
    SYM_GTE_T,
    SYM_EQ_T,
    SYM_NE_T,
    SYM_INCR_T,
    SYM_DECR_T,
    SYM_AND_T,
    SYM_OR_T,

    EOL_T, // \n

    UNDEF_T // symbols not in the language
};
