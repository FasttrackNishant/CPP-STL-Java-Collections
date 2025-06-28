# C++ STL Containers - Time and Space Complexities

This is a quick reference guide to C++ STL containers with their common operations' **time and space complexity**.

## 1. Vector (`std::vector`)
| Operation        | Time Complexity | Space Complexity |
|------------------|------------------|------------------|
| Access by index  | O(1)             | O(n)             |
| Insertion at end | O(1) amortized   | O(n)             |
| Insertion in middle | O(n)          | O(n)             |
| Deletion at end  | O(1)             | O(n)             |
| Deletion in middle | O(n)           | O(n)             |

---

## 2. List (`std::list`)
| Operation         | Time Complexity | Space Complexity |
|-------------------|------------------|------------------|
| Access            | O(n)             | O(n)             |
| Insert/Delete (anywhere) | O(1)     | O(n)             |
| Search            | O(n)             | O(n)             |

---

## 3. Deque (`std::deque`)
| Operation         | Time Complexity | Space Complexity |
|-------------------|------------------|------------------|
| Access by index   | O(1)             | O(n)             |
| Insertion/Deletion at front/back | O(1) | O(n)         |
| Insertion in middle | O(n)           | O(n)             |

---

## 4. Stack (`std::stack`) — uses `deque` internally
| Operation       | Time Complexity | Space Complexity |
|-----------------|------------------|------------------|
| Push/Pop/Top    | O(1)             | O(n)             |

---

## 5. Queue (`std::queue`) — uses `deque` internally
| Operation       | Time Complexity | Space Complexity |
|-----------------|------------------|------------------|
| Enqueue/Dequeue | O(1)             | O(n)             |
| Front/Back      | O(1)             | O(n)             |

---

## 6. Priority Queue (`std::priority_queue`)
| Operation       | Time Complexity | Space Complexity |
|-----------------|------------------|------------------|
| Insert (push)   | O(log n)         | O(n)             |
| Access Top      | O(1)             | O(n)             |
| Remove Top      | O(log n)         | O(n)             |

---

## 7. Set / Multiset (`std::set`, `std::multiset`) — implemented as Red-Black Tree
| Operation     | Time Complexity | Space Complexity |
|---------------|------------------|------------------|
| Insert/Delete | O(log n)         | O(n)             |
| Search        | O(log n)         | O(n)             |
| Ordered       | Yes              | Yes              |

---

## 8. Unordered Set / Map (`std::unordered_set`, `std::unordered_map`) — Hash Table
| Operation     | Average Time | Worst Case Time | Space Complexity |
|---------------|---------------|------------------|------------------|
| Insert/Delete | O(1)          | O(n)             | O(n)             |
| Search        | O(1)          | O(n)             | O(n)             |
| Ordered       | No            | No               | No               |

---

## 9. Map / Multimap (`std::map`, `std::multimap`) — implemented as Red-Black Tree
| Operation     | Time Complexity | Space Complexity |
|---------------|------------------|------------------|
| Insert/Delete | O(log n)         | O(n)             |
| Search        | O(log n)         | O(n)             |
| Ordered       | Yes              | Yes              |

---

## 10. Bitset (`std::bitset`)
| Operation     | Time Complexity | Space Complexity |
|---------------|------------------|------------------|
| Access/Update | O(1)             | O(n) bits        |
| All/Any/None  | O(n)             | O(n) bits        |

---

**Note:** `n` = number of elements in the container.