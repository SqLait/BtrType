#define BTR_TYPES
#ifdef BTR_TYPES
#include <cstdint>
#include <stdint.h>
#include <stdbool.h>

// Signed integers
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

// Unsigned integers
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

// Floating-points
typedef float f32;
typedef double f64;

// Char and char[]
typedef char c8;
typedef char* str;
typedef char* string;

//Long types
typedef long l32;
typedef unsigned long ul32;
typedef long long l64;
typedef unsigned long long ul64;
#endif
