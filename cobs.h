// Based on https://github.com/jacquesf/COBS-Consistent-Overhead-Byte-Stuffing/blob/master/cobs.h

#ifndef COBS_H
#define	COBS_H

#include <stdint.h>
#include <stddef.h>

void cobs_encode(const uint8_t* input, size_t length, uint8_t* output);
size_t cobs_decode(const uint8_t* input, size_t length, uint8_t* output);

#endif	/* COBS_H */

