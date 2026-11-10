cat > README.md <<'EOF'
# Simple Calculator

A simple calculator program written in C.

## Features
- Display a welcome message.
- Display a repeating menu.
- Addition, subtraction, multiplication, and division.
- Reject invalid menu choices.
- Prevent division by zero.
- Support decimal division results.
- Quit using option 0.

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Execution

./calculator

## Division
Division uses floating-point arithmetic to support decimal results.
If the second number is zero, the program displays:
Error: division by zero
EOF
