#define BTR_VECTORS
#ifdef BTR_VECTORS
#include "btrtypes.h"

// Basic Vectors
typedef struct {
  f32 x;
} Vec1;

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
#endif
