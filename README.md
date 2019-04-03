# Pig Dice

This programming project implements a simple clone of the popular game **Pass the Pig**&copy; and **PigMania**&copy;.

The main objective with this assignemnt is to introduce separate compiling, progressive programming (small versions towards the final full-fledged program), as well as to provide an oportunity to develop a project using the tools already taught such as git and doxygen.

## The Gameplay
Pig is a folk jeopardy dice game described by John Scarne in 1945, in which two players compete to reach **100 points** first.

The game is organized in turns. Each turn, the same player keeps rolling the dice, while the face points are accmulated into a __turn total__, until one of these two conditions happen:

1. The current player decides to _hold_, in which case s/he scores the **turn total**; or,
2. The face  &#9856;, (the pig) is rolled, in which case the current player scores nothing.

In both cases, the **turn total** is set to zero and it becomes the opponent's turn.

In summary, any time during a player's turn, s/he must take one of these two *actions*:

* **Roll** the dice, which may produce:
    - Face &#9856;: the player scores nothing and it becomes the opponent's turn;
    - Faces &#9857;, &#9858;, &#9859;, &#9860;, or &#9861;: the face point is added to the **turn total** and the player's turn continues.
* **Hold**
    - The _turn total_ is added to the player's overall score and it becomes the opponent's turn.

The player who scores **100** or more points at the end of a turn is the winner.

## How to use

### Dependencies
* `make`
* `g++`

### Compile
To compile the project, first you need to clone th repository with

```bash
git clone https://github.com/matheusmas132/Pig-Dice.git
```

or download the project manualy.

Go to project directory and use

```bash
make
```

### Run
Type `bin/main` to run and enjoy!

## Authorship
Program developed by [Matheus de Andrade](https://github.com/matheusmas132) and [Felipe Medeiros](https://github.com/felipecolares22), 2019.1

&copy; IMD/UFRN 2017.