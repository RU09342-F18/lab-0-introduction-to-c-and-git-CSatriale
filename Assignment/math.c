#include math.h
    int math(int num1, int num2, char Operator):
    
    switch(Operator)
    {
        case '+':
            return num1 + num2; //addition
        case '-':
            return num1 - num2; //subtraction
        case '*':
            return num1 * num2; //multiplication
        case '/':
            return num1 / num2; //division
        case '%':
            return num1 % num2; //modulus
        case '<':
            return num1 << num2; //left shift
        case '>':
            return num1 >> num2; //right shift
        case '&':
            return num1 & num2; //bitwise and
        case '|':
            return num1 | num2; //bitwise or
        case '^':
            return num1 ^ num2; //bitwise xor
        case '~'
            return ~num1; //inverse
            
        default: 
            return 0;                
                
    }