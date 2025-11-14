#ifndef FLOAT_H
#define FLOAT_H


typedef int float_type;

// Conversão de int para float
#define FLOAT_CONST(A) ((float_type)(A << 14))

// Soma e subtração de floats
#define FLOAT_ADD(A, B) (A + B)
#define FLOAT_SUB(A, B) (A - B)

// multiplicação e divisão de floats
#define FLOAT_MULT(A, B) ((float_type)((((int64_t) A) * B) >> 14))
#define FLOAT_DIV(A, B) ((float_type)((((int64_t) A) << 14) / B))

// Arredondamento
#define FLOAT_ROUND(A) (A >= 0 ? ((A + (1 << (13))) >> 14) : ((A - (1 << (13))) >> 14))

#endif