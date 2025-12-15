#include <Chip8.hpp>
#include <Platform.hpp>
#include <bits/stdc++.h>

int main(int argc, char** argv)
{
    if(argc != 4)
    {
        std::cerr << "Usage: "<<argv[0] << "<Scale> <Delay> <ROM>\n";
    }

    int videoScale = std::stoi(argv[1]);
    int cycleDelay = std::stoi(argv[2]);
    char const* romName = argv[3];

    Platform platform("CHIP-8 emu", VIDEO_WIDTH * videoScale, VIDEO_HEIGHT * videoScale, VIDEO_WIDTH, VIDEO_HEIGHT);

    Chip8 Chip8;
    Chip8.LoadROM(romName);
    return 0;
}