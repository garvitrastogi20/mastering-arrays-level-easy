# 🚀 Mastering Arrays in C++ – Problem Solving Repository

Welcome to my **DSA Problem-Solving** repository focused on mastering **array-based problems** in **C++**, covering brute force to optimal approaches. This structured approach helps strengthen logic, coding confidence, and interview preparation.

---

## 📘 Topics Covered

| S.No | Problem Title | Approach | Time Complexity | Space Complexity | Description |
|------|---------------|----------|-----------------|------------------|-------------|
| 1 | [checkwhetherarrayissorted.cpp](./codes/checkwhetherarrayissorted.cpp) | Simple Iteration | O(n) | O(1) | Verifies if array is sorted in non-decreasing order. |
| 2 | [linearsearch.cpp](./codes/linearsearch.cpp) | Brute Force | O(n) | O(1) | Searches for an element linearly. |
| 3 | [largestelement.cpp](./codes/largestelement.cpp) | Scan | O(n) | O(1) | Finds the largest element in the array. |
| 4 | [secondlargest.cpp](./codes/secondlargest.cpp) | Single Pass | O(n) | O(1) | Finds the second largest element without sorting. |
| 5 | [secondsmallest.cpp](./codes/secondsmallest.cpp) | Single Pass | O(n) | O(1) | Finds the second smallest element without sorting. |

---

## 🔁 Rotations

| S.No | Problem Title | Approach | Time Complexity | Space Complexity | Description |
|------|---------------------------|----------|-----------------|------------------|-------------|
| 6 | [leftrotatebyoneplace.cpp](./codes/leftrotatebyoneplace.cpp) | Brute | O(n) | O(1) | Shifts all elements one index left. |
| 7 | [leftrotatebykoptimalsolution.cpp](./codes/leftrotatebykoptimalsolution.cpp) | Optimal (Reversal) | O(n) | O(1) | Rotates array by `k` efficiently using reverse operations. |

---

## ❓ Missing Number from 0 to n

| S.No | Problem Title | Approach | Time Complexity | Space Complexity | Description |
|------|---------------------------|----------|-----------------|------------------|-------------|
| 8 | [missingnumberbruteforce.cpp](./codes/missingnumberbruteforce.cpp) | Brute Force | O(n²) | O(1) | For each number from 0 to n, checks if it exists. |
| 9 | [missingnumberbettersolution.cpp](./codes/missingnumberbettersolution.cpp) | Better (Hashing) | O(n) | O(n) | Marks presence using extra space. |
| 10 | [missingnumberoptimalSUM.cpp](./codes/missingnumberoptimalSUM.cpp) | Optimal (Sum Formula) | O(n) | O(1) | Uses formula `n*(n+1)/2` minus array sum. |
| 11 | [missingnumberoptimalXOR.cpp](./codes/missingnumberoptimalXOR.cpp) | Optimal (XOR) | O(n) | O(1) | XORs indices and elements to isolate missing number. |

---

## 🔢 Number Appearing Once (All Others Twice)

| S.No | Problem Title | Approach | Time Complexity | Space Complexity | Description |
|------|---------------------------|----------|-----------------|------------------|-------------|
| 12 | [numberappearingonce.cpp](./codes/numberappearingonce.cpp) | Brute Force | O(n²) | O(1) | Count frequency for each element. |
| 13 | [numberappearingonceoptimal.cpp](./codes/numberappearingonceoptimal.cpp) | Optimal (XOR) | O(n) | O(1) | XOR all elements; duplicates cancel out. |

---

## 0️⃣ Move Zeros to End

| S.No | Problem Title | Approach | Time Complexity | Space Complexity | Description |
|------|---------------------------|----------|-----------------|------------------|-------------|
| 14 | [placeallzeroatendbruteforce.cpp](./codes/placeallzeroatendbruteforce.cpp) | Brute Force | O(n) | O(n) | Copies non-zeros to new array. |
| 15 | [placeallzerosatendoptimalsolution.cpp](./codes/placeallzerosatendoptimalsolution.cpp) | Optimal (Two-Pointer) | O(n) | O(1) | Swaps non-zero elements forward in-place. |

---

## ✂️ Remove Duplicates from Sorted Array

| S.No | Problem Title | Approach | Time Complexity | Space Complexity | Description |
|------|---------------------------|----------|-----------------|------------------|-------------|
| 16 | [removeduplicate.cpp](./codes/removeduplicate.cpp) | Optimal (Two-Pointer) | O(n) | O(1) | Removes duplicates in-place from sorted array. |

---

## 🤝 Intersection of Two Sorted Arrays

| S.No | Problem Title | Approach | Time Complexity | Space Complexity | Description |
|------|---------------------------|----------|-----------------|------------------|-------------|
| 17 | [intersectionoftwosortedarraybruteforce.cpp](./codes/intersectionoftwosortedarraybruteforce.cpp) | Brute Force | O(n * m) | O(1) | Compares every element from first to every in second. |
| 18 | [intersectionoftwosortedarraysoptimal.cpp](./codes/intersectionoftwosortedarraysoptimal.cpp) | Optimal (Two-Pointer) | O(n + m) | O(1) | Uses two-pointer technique to find common elements. |

---

## 🔗 Union of Two Sorted Arrays

| S.No | Problem Title | Approach | Time Complexity | Space Complexity | Description |
|------|---------------------------|----------|-----------------|------------------|-------------|
| 19 | [unionoftwosortedarraysbruteforce.cpp](./codes/unionoftwosortedarraysbruteforce.cpp) | Brute Force | O((n + m) log(n + m)) | O(n + m) | Combines and sorts using set to remove duplicates. |
| 20 | [unionoftwosortedarraysoptimalapproach.cpp](./codes/unionoftwosortedarraysoptimalapproach.cpp) | Optimal (Two-Pointer) | O(n + m) | O(n + m) | Merges arrays while skipping duplicates. |

---

## 🔢 Maximum Consecutive 1s

| S.No | Problem Title | Approach | Time Complexity | Space Complexity | Description |
|------|---------------------------|----------|-----------------|------------------|-------------|
| 21 | [maximumconsecutiveones.cpp](./codes/maximumconsecutiveones.cpp) | Counting | O(n) | O(1) | Tracks longest streak of continuous 1s. |
---

## 🧩 Stack & Bracket Matching

| S.No | Problem Title | Approach | Time Complexity | Space Complexity | Description |
|------|---------------------------|----------|-----------------|------------------|-------------|
| 22 | [validparanthesis.cpp](./codes/validparanthesis.cpp) | Stack | O(n) | O(n) | Checks for valid matching of parentheses using stack logic. |


## 🧠 Learning Outcomes

- Mastered brute-to-optimal transitions  
- Strengthened core array manipulation logic  
- Learned in-place optimizations, hashing, and bit manipulation (XOR)  
- Built confidence for technical interviews  

---

## 🔧 Tech Stack

- Language: **C++**  
- Tools: G++, CodeBlocks, VSCode  
- Concepts: Arrays, XOR, Hashing, Two-Pointers, In-place Operations  

---

## ▶️ How to Run

```bash
git clone https://github.com/your-username/array-dsa-cpp.git
cd array-dsa-cpp
g++ problem_name.cpp -o output
./output
```

## 📫 Contact

Created by Garvit Rastogi 
🔗 GitHub: [@garvitrastogi20](https://github.com/garvitrastogi20)  
📧 Email: garvitrastogi2055@gmail.com

⭐ If you find this useful, star the repo and share it with fellow learners!
