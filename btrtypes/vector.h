#define BTR_VECTORS
#ifdef BTR_VECTORS
#include "btrtypes.h"
typedef struct {
  f32 x;
} Vector1;

typedef struct {
  f32 x;
  f32 y;
} Vector2;

typedef struct {
  f32 x;
  f32 y;
  f32 z;
} Vector3;

typedef struct {
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} Vector4;

typedef struct {
  f32 x;
  f32 y;
  f32 z;
  f32 w;
  f32 v;
} Vector5;
#endif
