# 430help -- An MSP-EXP430G2 Pipeline For Dinguses

![You Dingus!](430help-you-dingus.jpg)

Because I am a dingus and keep forgetting how to compile and upload files to
my beloved MSP-EXP430G2 Launchpad, I'm building this silly little repository for
myself and for dinguses like myself that need a little help once in a while
remembering how to do stuff... because dingus.

Honestly, it's not a hard process -- but I can never remember.

Eventually, I'll get turn this into a whole MSP-EXP430G2 tutorial repository and it'll be full of cool stuff like how to program the 430 and how to take the chip off-board and do some real neat-o fun junk and whatnot.

## Rember to install the dependencies, you dingus!

Install MSP430-GCC:
```
$ sudo apt-get install gcc-msp430
```
Install mspdebug:

```
$ sudo apt-get install mspdebug
```

## How to compile and upload MSP430-GCC Programs With the MSP-EXP430G2 launchpad:

In the terminal:
```
$ msp430-gcc -Os -Wall -g -mmcu=msp430g2553 <file name.c> -o <file name>.o
$ mspdebug rf2500
```
In mspdebug (after compiling above):
```
(mspdebug) prog <file name>.o
(mspdebug) exit
```

## Using the 430help executable:
The 430help executable will do the compiling *and* uploading for you assuming that mspdebug and msp430-gcc are both installed and that you are using the msp430g2553 with the MSP-EXP430G2 launchpad. You will need to tell it the
names of the input and output file, though. It can't do everything for you.

Run 430help:
```
$ ./430help <inputFile.c> <outpuFile.o>
```
Make sure the 430help executable is in the same directory as your input file -- and don't forget the slash-dot out front, dingus!

Look at that! It's even polite enough to exit the mspdebugger for you! Wow!
