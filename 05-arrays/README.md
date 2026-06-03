# Arrays

Foundational array operations — traversal, search, min/max tracking, in-place manipulation, and counting techniques.

**Source:** 100xSchool Bootcamp (Codeforces group)
**Language:** C++

---

## Problems

| # | Problem | Pattern | Time | Space |
|---|---------|---------|------|-------|
| A | [Print Array In Reverse](a-print-array-in-reverse.cpp) | Reverse traversal | O(n) | O(n) |
| B | [Sum of Array](b-sum-of-array.cpp) | Accumulation (long long for overflow) | O(n) | O(n) |
| C | [Minimum Element and Position](c-minimum-element-and-position.cpp) | Min tracking, first index on tie | O(n) | O(n) |
| D | [Maximum Element with Position](d-maximum-element-with-position.cpp) | Max tracking, first index on tie | O(n) | O(n) |
| E | [Search Element in Array](e-search-element-in-array.cpp) | Linear search | O(n) | O(n) |
| F | [Count Occurrences](f-count-occurrences.cpp) | Counting | O(n) | O(n) |
| G | [Check If Array is Sorted](g-check-if-array-is-sorted.cpp) | Adjacent comparison | O(n) | O(n) |
| H | [Sort 01](h-sort-01.cpp) | Counting sort (0s and 1s) | O(n) | O(n) |
| I | [Reverse](i-reverse-in-place.cpp) | In-place reverse | O(n) | O(n) |
| J | [Arrange the Numbers](j-arrange-the-numbers.cpp) | Two-pointer fill | O(n) | O(n) |
| K | [Swap Alternate](k-swap-alternate.cpp) | Pairwise swap | O(n) | O(n) |
| L | [Missing Number](l-missing-number.cpp) | Frequency count (unique element) | O(n²) | O(n) |
| M | [Find Duplicate Number](m-find-duplicate-number.cpp) | Frequency count | O(n²) | O(n) |
| N | [Intersection of Arrays](n-intersection-of-arrays.cpp) | Nested scan + mark used | O(n·m) | O(n+m) |
| O | [Pair Sum](o-pair-sum.cpp) | Count pairs to target | O(n²) | O(n) |
| P | [Triplets](p-triplets.cpp) | Count triplets to target | O(n³) | O(n) |
| Q | [Count Quadruplets](q-count-quadruplets.cpp) | Weighted index equation | O(n⁴) | O(n) |

---

## Key Takeaways

- **Overflow:** Sum of up to 1e5 elements (each up to 1e9) exceeds `int` — use `long long`.
- **Tie-breaking:** Strict `<` / `>` comparison keeps the *first* occurrence's index.
- **Counting beats sorting:** When values are restricted (e.g. only 0s and 1s), count and reconstruct in O(n) instead of an O(n log n) sort.
- **Two pointers:** Fill from both ends to interleave ordered sequences without extra passes.
