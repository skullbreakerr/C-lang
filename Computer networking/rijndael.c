#include<stdio.h>
#include<conio.h>
#include<String.h>
#define LENGTH 16
#define NROWS 4
#define NCOLS 4
#define ROUNDS 10

typedef unsigned char byte;

rijndael(byte plaintext[LENGTH],byte ciphertext[LENGTH],byte key[LENGTH]){
    int r;
    byte state[NROWS][NCOLS];
    struct {
        byte k[NROWS][NCOLS];
    }
    rk[ROUNDS+1];
    expand_key(key,rk);
    copy_plaintext_to_state(state,plaintext);
    xor_roundkey_into_state(state,rk[0]);
    for ( r = 1; r <=ROUNDS ; r++)
    {
       
    } 
}
