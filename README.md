# Smallest-Number-in-Infinite-Set# Smallest Infinite Set

## Problem Description

You have a set that initially contains all positive integers:  
`[1, 2, 3, 4, 5, ...]`

Implement the **SmallestInfiniteSet** class:

- **SmallestInfiniteSet()**  
  Initializes the object to contain all positive integers.  

- **int popSmallest()**  
  Removes and returns the smallest integer contained in the infinite set.  

- **void addBack(int num)**  
  Adds a positive integer `num` back into the infinite set, if it is not already present.  

---

## Example

**Input:**
```text
["SmallestInfiniteSet", "addBack", "popSmallest", "popSmallest", "popSmallest", "addBack", "popSmallest", "popSmallest", "popSmallest"]
[[], [2], [], [], [], [1], [], [], []]

Output:
[null, null, 1, 2, 3, null, 1, 4, 5]
