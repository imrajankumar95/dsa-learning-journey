# Bit Manipulation

Bitwise operations for efficient computation — checking bits, toggling, counting, and XOR-based tricks.

## Key Concepts
- AND (`&`), OR (`|`), XOR (`^`), NOT (`~`), shifts (`<<`, `>>`)
- XOR properties: `a ^ a = 0`, `a ^ 0 = a`
- Check if power of 2: `n & (n-1) == 0`
- Count set bits: Brian Kernighan's algorithm
- Odd/even without modulo: `n & 1`

## Problems

| # | Problem | Difficulty | Pattern | Solution |
|---|---------|------------|---------|----------|
| 1 | Bitwise Operators - I | Easy | Basics | [Solution](01-bitwise-operators-1.cpp) |
| 2 | Power of 2 | Easy | Bit check | [Solution](02-power-of-2.cpp) |
| 3 | Count Set Bits | Easy | Kernighan's | [Solution](03-count-set-bits.cpp) |
| 4 | Single Number - I | Easy | XOR | [Solution](04-single-number-1.cpp) |
| 5 | Odd or Even Without Modulo | Easy | AND | [Solution](05-odd-even-without-modulo.cpp) |
