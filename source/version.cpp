#pragma once

#include "version.h"

const char* VER_NAME = "Barrage am Ring";

const unsigned VER_MAJOR = 0;
const unsigned VER_MINOR = 14;
const unsigned VER_BUILD = 1605;

const char* VER_STRING = "version 0.14.1605 built on 2014/10/24 13:01:41";

#ifdef _DEBUG
const char* MODE_STRING = "DEBUG";
#else
const char* MODE_STRING = "RELEASE";
#endif

