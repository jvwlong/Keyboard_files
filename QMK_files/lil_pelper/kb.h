#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K01, K02, K03, \
	K11, K12, K13, \
	K20, K21, K22  \
) { \
	{ K01, K02,   K03 }, \
	{ K11, K12,   K13 }, \
	{ K20,   K21,   K22 }  \
}

#endif