int main(int argc){

    // standard identifier tests
    char _Abc = 'a'; // token for _Abc is STD_ID_T
    char ab4 = 'a'; // token for ab4 is STD_ID_T
    char somestring[] = "hello" // token for somestring is STD_ID_T
    char 44krampus = 'a'; // 44krampus should be undefined

    // non-standard identifier in string
    char *str = "44_nonstandard"; // token for "44-nonstandard" is STR_T

    // keyword test - read
    char a[50];
    if (read(0, a, 10) < 0) {
        /* code */
    }

    // keyword test - for
    for (int i = 0; i < 10; i++) {
        /* code */
    }
}

// keyword test - return
int testFunction(int i) {
    return i;
}

// keyword test - void
void test(int b) {
    b++;
    return;
}
