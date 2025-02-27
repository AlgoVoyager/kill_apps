# Kill Applications using C

## Description
This C program reads a list of application process names from a file (`kill_list.txt`) and terminates them using the Windows `taskkill` command.

## Features
- Reads process names from `kill_list.txt`
- Uses `taskkill` to forcibly terminate applications
- Simple and efficient

## Requirements
- Windows OS
- MinGW (for `gcc` compiler)
- Administrator privileges to terminate applications

## Installation & Compilation
1. Install `gcc` if not already installed.
2. Save the source code as `kill_apps.c`.
3. Open the command prompt or PowerShell in the same directory.
4. Compile the program:
   ```powershell
   gcc kill_apps.c -o kill_apps.exe
   ```

## Usage
1. Create a text file named `kill_list.txt` in the same directory.
2. Add process names (one per line), e.g.:
   ```
   notepad.exe
   chrome.exe
   calc.exe
   ```
3. Run the program as administrator (it worked without running as admin):
   ```powershell
   .\kill_apps.exe
   ```

## Notes
- Ensure the process names are correct.
- Running without admin privileges may result in failure to terminate some processes.
- Modify `kill_list.txt` to include or remove applications as needed.

## License
This project is open-source and free to use.

## Author
Created by Nishant Dewangan

