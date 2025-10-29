#define BIT_OPERATIONS_H

#include <stdint.h>

// set 1
uint8_t set_mask_8(uint8_t value, uint8_t mask);
uint16_t set_mask_16(uint16_t value, uint16_t mask); 
uint32_t set_mask_32(uint32_t value, uint32_t mask);

// set 0
uint8_t clear_mask_8(uint8_t value, uint8_t mask);
uint16_t clear_mask_16(uint16_t value, uint16_t mask);
uint32_t clear_mask_32(uint32_t value, uint32_t mask);

// inversion
uint8_t inversion_mask_8(uint8_t value, uint8_t mask);
uint16_t inversion_mask_16(uint16_t value, uint16_t mask);
uint32_t inversion_mask_32(uint32_t value, uint32_t mask);

// logical shift left
uint8_t logical_shift_left_8(uint8_t value, uint8_t shift);
uint16_t logical_shift_left_16(uint16_t value, uint8_t shift);
uint32_t logical_shift_left_32(uint32_t value, uint8_t shift);

// logical shift right
uint8_t logical_shift_right_8(uint8_t value, uint8_t shift);

uint16_t logical_shift_right_16(uint16_t value, uint8_t shift);

uint32_t logical_shift_right_32(uint32_t value, uint8_t shift);

// rotate shift left
uint8_t rotate_left_8(uint8_t value, uint8_t shift);

uint16_t rotate_left_16(uint16_t value, uint8_t shift);
uint32_t rotate_left_32(uint32_t value, uint8_t shift);

// rotate shift right
uint8_t rotate_right_8(uint8_t value, uint8_t shift);

uint16_t rotate_right_16(uint16_t value, uint8_t shift);

uint32_t rotate_right_32(uint32_t value, uint8_t shift);
