#pragma once

#include <cstdlib>
#include <string>

// gettok is the function that translates the characters of the source code
// to a token id. CurTok holds the current token.
extern int CurTok;
int gettok();

// If the current token is an identifier then this variable will hold the name of it.
extern std::string IdentifierStr;

// otherwise if the token is a number then this will hold it.
extern double NumVal;