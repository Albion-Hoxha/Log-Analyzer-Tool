# Log-Analyzer-Tool
Simple log analyzer written in C++ for practice with file handling and string parsing.

## Features
- Reads any log file
- Counts ERROR, INFO, WARNING messages
- Uses file handling
- Uses string parsing
- User can choose file name

## How to run

Compile:

g++ log_analyzer.cpp -o log_analyzer

Run:

./log_analyzer

Program will ask for file name.

Example:

Enter log file name: log.txt

## Example log file

INFO User login
ERROR Wrong password
WARNING Disk full