#pragma once

#include <string>
#include <vector>

enum class TokenType {
    SEMICOLON,
    STRING,
    VAR,
    DOUBLE,
    INTEGER,
    DEQUAL,
    NEQUAL,
    LESS,
    LESSEQUAL,
    GREATER,
    GREATEREQUAL,
    PLUS,
    MINUS,
    MUL,
    DIV,
    AND,
    OR,
    EQUAL,
    INTTYPE,
    DOUBLETYPE,
    STRINGTYPE,
    WHILE,
    FOR,
    IF,
    ELSE,
    LBRACE,
    RBRACE,
    LCURL,
    RCURL,
    RETURN
};

struct TokenMatch {
    std::string regex;
    TokenType tokenType;
};

struct Token {
    TokenType tokenType;
    std::string value;
};

class Lexer {
public:
    Lexer (std::string filePath);
    Token at(int pos) const;
    int size() const {return tokens.size();}
private:
    /// @brief Recursively scan the given data for tokens and appending them to the list of tokens in order
    /// @param data the string thats to be lexed
    /// @param tokens the list of tokens which are contained in the data
    void recLexing(std::string data, std::vector<Token> &tokens);
    
    /// @brief This will do a "hard match" (^regex$) for all possible tokens and fill out the given token accordingly
    /// @param e the string which could contain a token
    /// @param t the return value of the associated token
    /// @return returns if there was a match e.g. the token will have content
    bool hardMatch(std::string e, Token &t);

    /// @brief This will replace all chars from the data which are defined in the search by the replacement char
    ///         with the exception of areas in between two chars defined by the exceptions
    /// @param data the string that needs cleaning
    /// @param search collection of elements that should be replaced
    /// @param replacement the replacement for search
    /// @param exceptions collection of chars in between there should be no replacement
    /// @return returns the cleaned string
    std::string cleanData (std::string data, std::string search, char replacement, std::string exceptions);
    std::vector<Token> tokens;
    const std::string replacementChar = "\a";
    const std::vector<TokenMatch> tokenMatch{
        {";",TokenType::SEMICOLON},
        {"^\\d+$",TokenType::INTEGER},
        {"==",TokenType::DEQUAL},
        {"!=",TokenType::NEQUAL},
        {"<",TokenType::LESS},
        {"<=",TokenType::LESSEQUAL},
        {">",TokenType::GREATER},
        {">=",TokenType::GREATEREQUAL},
        {"\\+",TokenType::PLUS},
        {"-",TokenType::MINUS},
        {"\\*",TokenType::MUL},
        {"/",TokenType::DIV},
        {"&&",TokenType::AND},
        {"\\|\\|",TokenType::OR},
        {"=",TokenType::EQUAL},
        {"int",TokenType::INTTYPE},
        {"double",TokenType::DOUBLETYPE},
        {"string",TokenType::STRINGTYPE},
        {"while",TokenType::WHILE},
        {"for",TokenType::FOR},
        {"if", TokenType::IF},
        {"else", TokenType::ELSE},
        {"\\(",TokenType::LBRACE},
        {"\\)",TokenType::RBRACE},
        {"\\{",TokenType::LCURL},
        {"\\}",TokenType::RCURL},
        {"return",TokenType::RETURN},
        {"\".*\"",TokenType::STRING},
        {"[a-zA-z_][a-zA-Z0-9_]*",TokenType::VAR},
        {"[+-]?([0-9]*)[.][0-9]+",TokenType::DOUBLE}
    };
};