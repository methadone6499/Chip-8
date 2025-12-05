#pragma once

#include <cstdint>
#include <random>

const unsigned int VIDEO_HEIGHT = 32;
const unsigned int VIDEO_WIDTH = 64;
const unsigned int MEMORY_SIZE = 4096;
const unsigned int REGISTER_COUNT = 16;
const unsigned int STACK_LEVELS = 16;

class Chip8
{
    public:
        Chip8();
        uint8_t keypad[16]{};
        uint32_t video[VIDEO_WIDTH * VIDEO_HEIGHT]{};
        uint8_t memory[MEMORY_SIZE]{};
        uint8_t registers[REGISTER_COUNT]{};
        uint16_t pc{};
        uint16_t index{};
        uint8_t sp{};
        uint16_t opcode{};
}