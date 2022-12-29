# Homework 02 - Guessing Game Instructions

👉🏽 **Task**

### Sample Game Output
```console
> clang -Wall game_main.c -o game.out
> ./game.out 
====================================================
| Welcome to the Guessing Game. Let's get started. |
====================================================
====================================================
|                     Round 1                      |
====================================================
Guess a number (1 to 10): 4
Congratulations, you found it!
====================================================
|                     Round 2                      |
====================================================
Guess a number (1 to 10): 10
Your guess is too high.
Guess a number (1 to 10): 5
Your guess is too low.
Guess a number (1 to 10): 7
Congratulations, you found it!
====================================================
|                     Round 3                      |
====================================================
Guess a number (1 to 10): 5
Your guess is too low.
Guess a number (1 to 10): 8
Congratulations, you found it!
====================================================
|                     Round 4                      |
====================================================
Guess a number (1 to 10): 55
Your guess is too high.
Guess a number (1 to 10): 5
Your guess is too low.
Guess a number (1 to 10): 8
Your guess is too high.
Guess a number (1 to 10): 7
Your guess is too high.
Guess a number (1 to 10): 6
Congratulations, you found it!
====================================================
|                     Round 5                      |
====================================================
Guess a number (1 to 10): 4
Congratulations, you found it!
====================================================
|              Results of the Rounds!              |
====================================================
Round 1 took you 1 guesses.
Round 2 took you 3 guesses.
Round 3 took you 2 guesses.
Round 4 took you 5 guesses.
Round 5 took you 1 guesses.
```


## 📝 Grading Rubric


Add (AG) and (MG) next to tiers, add major conditions to meet to pass each tier. 

1. Learning ()
   * 
2. Approaching  ()
   * 
3. Meets  ()
   * 
4. Exceeds  (MG)
   * README.md updated (including sources cited)
   * Student followed single(ish) task per function design principle 
   * Student made and documented unit tests
   * Code fully documented and easy to follow
   * Student has at least 3 commits with informative messages


AG - Auto-graded  
MG - Manually graded


## 📚 Resources
* [clang compiler](https://clang.llvm.org/)
* [gcc compiler](https://www.gnu.org/software/gcc/)


### Github Commit Guide
Assignment work flow tends to be similar to the following:

* Open up your .c / .h file in a text editor
* Write or change a very small number of lines of code (sometimes just one change!)
* Save the text file
* Recompile your program `gcc -Wall main.c -o main` (or something similar)
* Run your program ./main and see if it does what you think it should be doing at this stage
  * This doesn't have to be a working program, but maybe a test you setup or print out!
* git add and git commit -m "your changes here" with the information about what you've added or changed
* Repeat!

This is the full "edit, save, compile, run, commit" cycle. It's very important that you follow this pattern for this assignment and throughout the semester! Write just a few lines of code, compile and check for warnings, and run your program. In fact, every time your program has a change in it, you should git commit the change and document it. 

Practice this pattern for this assignment and all assignments going forward! It's a crucial part of professional coding to get used to checking and committing small changes to your code base. 

Sometimes it may seem overkill, but it will make a difference as code bases get larger. 