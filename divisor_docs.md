This is the documentation for divisor and divisor_result binaries.

# What's the difference?

Both have the same purpose for the end user. The only difference is that divisor is written in C++ but divisor_result is written in Fortran 95.

```
axolotelua@axobuntu:~$ ./divisor
Enter number: 78
Enter another number: 6
78 is divisible by 6
axolotelua@axobuntu:~$ ./divisor_result
 enter a number:
78
 enter another number:
6
   78.0000000      is divisible by    6.00000000     . Have a nice day :P 
axolotelua@axobuntu:~$ 
```

This is the example of divisor and divisor_result. Note that divisor_result adds a bunch of unnecessary spaces and 0's.

# How to use it?

## divisor (C++)

To execute on Linux, type ./divisor (do it in the folder that contains the proper file)
When prompted to enter a number, enter any number.
The program will ask to do that again, but this time we suggest you to type a different number.

If you are on Windows, good luck compiling the app into exe because it'll take forever :)

The result is either "(num) is divisible by (divisor)" or "(num) isn't divisible by (divisor)"
(num) is the first number you entered
(divisor) is the second number you entered.

### Known issues

- Division by 0 possible (5 is divisible by 0)
 - It's a feature
- Treats Infinity and NaN as 0

## divisor_result (Fortran 95)

To execute on Linux, type ./divisor_result (do it in the folder that contains the proper file)
When prompted to enter a number, enter any number.
The program will ask to do that again, but this time we suggest you to type a different number.

The result is either `   (num)      is divisible by    (divisor)     . Have a nice day :P` or `   (num)      isn't divisible by   (divisor)     . Have a nice day :P	`
(num) is the first number you entered
(divisor) is the second number you entered.

### Known issues

- Unnecessary spaces
- Unnecessary zeroes
- 5.00000000 is divisible by Infinity
 - It's a feature

# Can I publish this wherever I want to?

Go ahead! You can do it anywhere you can. 
If you obtained the binary or the source code from anywhere except the main repository, Discord DMs or any Discord server where axolotelUA is, make sure to reference the source.
Example:

I have obtained the source code for divisor_result (a Fortran program to check if num is divisible by divisor, made by axolotelUA) from this source: https://www.youtube.com/watch?v=2d8sKt3LECY
Nightcore - Miku - Anamanaguchi (ft. Hatsune Miku) - Lyrics | September 21 2023 | Idk- Nightcore? (684 subscribers)
