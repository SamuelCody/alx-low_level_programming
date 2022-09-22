#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Ayinde Samuel
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x06-pointers_arrays_strings directory.
 */

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strcat(char*, char*);
char *_strncpy(char*, char*, int);
int _strcmp(char*, char*);
void reverse_array(int*, int);
char *string_toupper(char*);
char *cap_string(char*);
char *leet(char *);
char *rot13(char*);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
