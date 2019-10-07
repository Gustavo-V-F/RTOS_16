#ifndef CKS32F1XX_RAND_H
#define CKS32F1XX_RAND_H

#include <stdint.h>

uint32_t ulRand(void);  /* RAND_MAX assumed to be 32767. */
void vSrand(unsigned int seed);

#endif