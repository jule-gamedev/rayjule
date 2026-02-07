#pragma once

#define __JULE_ENABLE__PRODUCTION
#ifdef DEBUG
#include <jule.hpp>
#endif
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#define NOGDI
#define NOUSER
#include <vector>
#include <shellapi.h>
#include "raylib.h"
#include "raymath.h"
#include "rlgl.h"
using Void = const void*;

Void ConvertBytesToVoidPtr(const char* byteArray, int size);
