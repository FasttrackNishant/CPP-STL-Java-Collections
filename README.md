# CPP STL & Java Collections

A practical, side‑by‑side guide to the C++ Standard Template Library (STL) and the Java Collections Framework (JCF), with examples, complexity notes, and equivalence mappings for common data structures and algorithms. This helps quickly translate concepts and code between C++ and Java.[1][2][3]

## Goals

- Compare containers, iterators/iterables, and algorithms in STL vs JCF with runnable snippets.[3][1]
- Provide a quick “what’s the equivalent?” mapping for day‑to‑day use.[4][5]
- Highlight performance and semantic differences that affect design choices.[6][1]

## Topics Covered

- Containers: vector vs ArrayList, deque vs ArrayDeque, list vs LinkedList, set/multiset vs Set, map/multimap vs Map.[1][3]
- Iteration: iterator categories (input/forward/bidirectional/random access) vs Java’s Iterator/ListIterator.[2][1]
- Algorithms: find/sort/lower_bound/unique vs Collections/Arrays utilities and stream operations.[7][1]
- Generics vs templates: type erasure vs compile‑time instantiation.[6][7]
- Value vs reference semantics; copying and mutability implications.[1][6]
- Big‑O notes and when to choose which container.[6][1]

## Repository Structure

- cpp/: C++ STL examples by container/algorithm.[1]
- java/: Java Collections examples with equivalent tasks.[3]
- cheatsheets/: side‑by‑side syntax and API summaries.[5]
- docs/: notes on semantics, performance, and pitfalls.[2][6]

## Key Differences to Remember

- STL algorithms are container‑agnostic and operate via iterator categories; Java algorithms are primarily container‑specific utilities in Collections/Arrays/Streams.[7][1]
- STL uses value semantics and can store objects directly; Java collections store references and use reference semantics.[6][1]
- Iterator richness: STL has input/forward/bidirectional/random‑access iterators; Java exposes Iterator/ListIterator without random‑access iterators.[2][1]
- Generics vs templates: Java uses type erasure; C++ generates type‑specific code at compile time.[7][6]

## Learning Resources

- C++ STL vs Java Collections overview and differences.[1]
- In‑depth comparison articles and examples.[2][6]
- Cheat sheets mapping STL to Java idioms.[5][3]
- Quick help and STL usage examples.[8]

## Contributing

- Add minimal, focused examples that compile and run. Include comments and complexity notes.[1]
- Keep symmetry: for each C++ example, add a Java counterpart if applicable.[3]
- Open a PR with a brief explanation and sample output.[9]

## License

Specify a license (MIT is common for educational code) to clarify usage.[10]
