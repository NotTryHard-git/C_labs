#include "bit_operations.h"
#include <stdint.h>


// set 1
uint8_t set_mask_8(uint8_t value, uint8_t mask) {
    return value | mask;
}

uint16_t set_mask_16(uint16_t value, uint16_t mask) {
    return value | mask;
}

uint32_t set_mask_32(uint32_t value, uint32_t mask) {
    return value | mask;
}

// set 0
uint8_t clear_mask_8(uint8_t value, uint8_t mask) {
    return value & ~mask;
}

uint16_t clear_mask_16(uint16_t value, uint16_t mask) {
    return value & ~mask;
}

uint32_t clear_mask_32(uint32_t value, uint32_t mask) {
    return value & ~mask;
}

// inversion
uint8_t inversion_mask_8(uint8_t value, uint8_t mask) {
    return value ^ mask;
}

uint16_t inversion_mask_16(uint16_t value, uint16_t mask) {
    return value ^ mask;
}

uint32_t inversion_mask_32(uint32_t value, uint32_t mask) {
    return value ^ mask;
}

// logical shift left
uint8_t logical_shift_left_8(uint8_t value, uint8_t shift) {
    return value << shift;
}

uint16_t logical_shift_left_16(uint16_t value, uint8_t shift) {
    return value << shift;
}

uint32_t logical_shift_left_32(uint32_t value, uint8_t shift) {
    return value << shift;
}

// logical shift right
uint8_t logical_shift_right_8(uint8_t value, uint8_t shift) {
    return value >> shift;
}

uint16_t logical_shift_right_16(uint16_t value, uint8_t shift) {
    return value >> shift;
}

uint32_t logical_shift_right_32(uint32_t value, uint8_t shift) {
    return value >> shift;
}

// rotate shift left
uint8_t rotate_left_8(uint8_t value, uint8_t shift) {
    return (value << shift) | (value >> (8 - shift));
}

uint16_t rotate_left_16(uint16_t value, uint8_t shift) {
    shift = shift % 16;
    return (value << shift) | (value >> (16 - shift));
}

uint32_t rotate_left_32(uint32_t value, uint8_t shift) {
    return (value << shift) | (value >> (32 - shift));
}

// rotate shift right
uint8_t rotate_right_8(uint8_t value, uint8_t shift) {
    return (value >> shift) | (value << (8 - shift));
}

uint16_t rotate_right_16(uint16_t value, uint8_t shift) {
    return (value >> shift) | (value << (16 - shift));
}

uint32_t rotate_right_32(uint32_t value, uint8_t shift) {
    return (value >> shift) | (value << (32 - shift));
}
