#include <iostream>
#include <Windows.h>

int main() 
{
    while (true)
    {
        std::cout << "Enter the letter: ";
        char letter;
        std::cin >> letter;
        SHORT virtualKeyCode = VkKeyScan(letter);

        if (virtualKeyCode == -1)
        {
            std::cout << "Invalid character!" << std::endl;
        }
        else
        {
            BYTE virtualKeyCodeByte = LOBYTE(virtualKeyCode);
            std::cout << "Character: " << letter << std::endl;
            std::cout << "Virtual Key Code: 0x" << std::hex << static_cast<int>(virtualKeyCodeByte) << std::endl;
            Sleep(500);
        }
    }

    return 0;
}