﻿#### XORinacci-Code-Force:


```cpp
#include <iostream>
using namespace std;
```

* Includes the standard input/output library and uses the `std` namespace so you can write `cin` and `cout` instead of `std::cin` and `std::cout`.

---

```cpp
int main() {
    int testCases;
    cin >> testCases;
```

* Declares an integer `testCases` and reads how many test cases will be run.

---

```cpp
    while (testCases--) {
```

* Loops for each test case. `testCases--` means the loop will run `testCases` times, decreasing the value each time.

---

```cpp
        int a, b, n;
        cin >> a >> b >> n;
```

* Reads three integers: `a`, `b`, and `n` for the current test case.

---

```cpp
        int apu[3];
        apu[0] = a;
        apu[1] = b;
        apu[2] = a ^ b;
```

* Creates an array `apu` of size 3:

  * `apu[0]` is assigned the value of `a`
  * `apu[1]` gets `b`
  * `apu[2]` gets the XOR (`^`) of `a` and `b`
  * This 3-value cycle (`a`, `b`, `a^b`) will repeat for every `n`.

---

```cpp
        cout << apu[n % 3] << endl;
```

* Outputs the value based on `n % 3` (modulo 3), which cycles through `0, 1, 2`:

  * If `n % 3 == 0`, output `a`
  * If `n % 3 == 1`, output `b`
  * If `n % 3 == 2`, output `a ^ b`

---

```cpp
    }
    return 0;
}
```

* Ends the loop and exits the program.

---

### 🔁 Summary:

This program uses the pattern `a`, `b`, `a^b` repeating every 3 steps. By using `n % 3`, it efficiently finds the value in that pattern for any `n`.


Great! Here's a **visual explanation** of how the pattern `a`, `b`, `a ^ b` works for any `n`:

---

### 🔁 Pattern Cycle:

We define:

* `apu[0] = a`
* `apu[1] = b`
* `apu[2] = a ^ b` (bitwise XOR of `a` and `b`)

Now the result repeats every 3 values of `n`:

| `n` (any value) | `n % 3` | Result |
| --------------- | ------- | ------ |
| 0               | 0       | a      |
| 1               | 1       | b      |
| 2               | 2       | a ^ b  |
| 3               | 0       | a      |
| 4               | 1       | b      |
| 5               | 2       | a ^ b  |
| ...             | ...     | ...    |

So, no matter how big `n` is, the answer is simply `apu[n % 3]`.

---

### 🧠 Why XOR (`^`)?

* XOR compares the bits of two numbers:

  * `0 ^ 0 = 0`
  * `1 ^ 0 = 1`
  * `0 ^ 1 = 1`
  * `1 ^ 1 = 0`
* It's often used in problems involving toggling, parity, or generating patterns with binary properties.


