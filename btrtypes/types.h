#ifndef TYPES_H  // Use a unique name, usually with "_H" to indicate a header guard
#define TYPES_H

#include <stddef.h>
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

// Long types
typedef long l32;
typedef unsigned long ul32;
typedef long long l64;
typedef unsigned long long ul64;

// Size types
typedef size_t usize;

// Simple C renames
#define null NULL;

// Functions
#define typeoff(var, type) _Generic((var), type: 1, default: 0)

typedef struct {
    f32 x;
    f32 y;
} Vec2;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

typedef struct {
    i32 x;
    i32 y;
} Point;

typedef struct {
    i32 x;
    i32 y;
    i32 z;
} Point3D;

#endif // TYPES_H

