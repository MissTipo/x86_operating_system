# Overview:

This project aims to develop a basic x86 Operating System entirely in the C programming language. The OS is being built from scratch, starting with the bootloader and kernel development. The primary goal is to understand the fundamental concepts of operating system design and implementation on the x86 architecture.
## Features:

   ** Bootloader: ** The project includes a custom bootloader responsible for loading the OS kernel into memory and transitioning control to the kernel code.

    ** Kernel: ** The kernel is the core component of the operating system, responsible for managing system resources, such as memory, processes, and I/O operations.

    ** Basic Functionality: ** Initially, the OS will support essential functionalities like process management, memory management, and basic input/output operations.

    ** Shell: ** A simple shell interface may be implemented to interact with the OS, allowing users to execute commands and interact with the system.

## Requirements:

    ** x86 Architecture: ** The OS is specifically designed for the x86 architecture, targeting Intel and compatible processors.

    ** Development Environment: ** A development environment with a C compiler capable of generating x86 assembly code is required. Tools like NASM (Netwide Assembler) may also be necessary for assembly programming.

    ** Emulator or Hardware: ** To test the OS, you'll need either a suitable emulator such as QEMU or VirtualBox, or hardware capable of running the x86 OS.

Usage:

    ** Setup Development Environment: ** Ensure you have a suitable development environment set up with a C compiler, assembler, and linker configured for the x86 architecture.

    ** Clone the Repository: ** Clone the repository containing the OS source code to your local machine.

    ** Compile: ** Use the provided Makefile or build script to compile the bootloader, kernel, and any other necessary components.

    ** Test: ** Run the compiled OS either on an emulator or actual hardware to test its functionality and behavior.

    ** Contribute: ** Contributions to the project are welcome. Feel free to fork the repository, make changes, and submit pull requests with improvements or fixes.

### Disclaimer:

    This operating system is developed for educational and experimental purposes and may not be suitable for production environments.

    Use caution when testing on real hardware, as it may have unintended consequences on your system.

### License:

This project is licensed under (GPL) version 3.0. See the [LICENSE](https://www.gnu.org/licenses/gpl-3.0.en.html) file for more details.

## Acknowledgments:

    I acknowledge the invaluable resources, tutorials, and community support that have helped in the development of this project.

[iThe little book about OS development](https://littleosbook.github.io/) by Erik Helin, Adam Renberg
[How Computers Boot Up](https://manybutfinite.com/post/how-computers-boot-up/)

## Conclusion:

Thank you for your interest in my x86 Operating System project. I hope it serves as a valuable learning resource for understanding OS development concepts and techniques. Happy coding!

