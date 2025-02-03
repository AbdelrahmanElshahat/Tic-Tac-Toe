# Tic Tac Toe in C++ 🎮
[![C++ Version](https://img.shields.io/badge/C++-23%2B-blue.svg)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
A simple, classic Tic Tac Toe game implemented in C++ using the minimax algorithm for AI decision-making. This project is perfect for learning C++ game development and exploring AI concepts.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Game Modes](#game-modes)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgements](#acknowledgements)

## Overview

Tic Tac Toe is a two-player game where players take turns marking spaces in a 3×3 grid. The first player to line up three of their marks horizontally, vertically, or diagonally wins the game.

This repository includes:
- Complete C++ source code for the game.
- CMake configuration files for building the project.
- An AI opponent powered by the **minimax algorithm**.

## Features

- **Minimax AI:** The AI uses the minimax algorithm to choose optimal moves.
- **Multiple Game Modes:** Choose between Human vs Human, Human vs AI, or AI vs AI.
- **Command-Line Interface:** Play directly from your terminal.
- **Win Detection:** Automatically checks for wins, losses, and draws.
- **Clean Code:** Well-commented code that’s ideal for beginners and those interested in AI.

## Installation

### Prerequisites

- A C++ compiler that supports C++11 or later.
- [CMake](https://cmake.org/) installed on your system.

### Build Instructions

1. **Clone the Repository**

   ```bash
   git clone https://github.com/AbdelrahmanElshahat/Tic-Tac-Toe.git
   cd Tic-Tac-Toe
2. **Build the Project**

   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .

## Usage
After building the project, you can run the game from the terminal. The game supports three modes:

1. **Human vs Human:** Both players are controlled by humans who input moves via the terminal.
2. **Human vs AI:** Choose whether you want to be the first or second player. The AI will calculate its moves using the minimax algorithm.
3. **AI vs AI:** Observe two AI instances competing, showcasing the minimax algorithm in action.

## contributing

Contributions are welcome! To contribute:

1. Fork the repository.
2 .Create a new branch.
    git checkout -b feature/your-feature-name
3. Make your changes and commit them.
    git commit -m 'Add some feature'
4. Push to your branch.
    git push origin feature/your-feature-name

## License
Distributed under the MIT License. See LICENSE for more details.

