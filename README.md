# Introduction

That's a simple program which calcs the cube of a provided number.

# Usage

The compiled file in build folder was compiled in linux ubuntu system.
To use it on other system you'll need to compile it for.
Use the gcc program to compile it
## Windows
for windows. See the page for [mingw-64 application](https://www.mingw-w64.org/), to get more information how to compile it on windows.
## macOs
for macOs simplely do follow commands:

```
brew update

brew upgrade

brew info gcc

brew install gcc
```
and you shold to be ready to compile it!  

after compile it on terminal, for example:
```
gcc main.c -o cube
```
on terminal just run the command into the folder where are the file, for example:
```
./cube