#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> & arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
 
vector<int> sortBalls(vector<int> balls){
    //sort the balls in place in a single pass (O(N) time, O(1) space)
    int n = balls.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
    	if (balls[mid] == 0) {
    		swap(balls, low, mid);
    		low++; mid++;
    	} else if (balls[mid] == 1) {
    		 mid++;
    	} else {
    		swap(balls, mid, high);
    		high--;
    	}
    }
         
    return balls;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	// perform dnf sort
	vector<int> balls = {0, 1, 2, 1, 1, 1, 0, 2, 0, 1, 0};

	vector<int> ans = sortBalls(balls);

	for (auto x : ans) {
		cout << x << " ";
	}

	return 0;
}


/*
DNF
basically this problem is about creating buckets in a sorted order right??

isn't this a sort?

*/

/*
Here’s a **summary-style explanation** of the code you shared:

---

### ✅ **Problem**:  
Sort an array of balls where each ball is labeled as either `0`, `1`, or `2`.  
This is also known as the **Dutch National Flag (DNF)** problem.

---

### 🧠 **Goal**:  
Sort the array in **one pass (O(N))** and using **no extra space (O(1))**.

---

### ⚙️ **Core Idea**:
Use **three pointers**:
- `low`: boundary for `0`s
- `mid`: current element
- `high`: boundary for `2`s

You iterate using `mid` and:
- if it's `0`, swap with `low`, move both `low` and `mid` forward
- if it's `1`, just move `mid` forward
- if it's `2`, swap with `high` and move `high` backward (don't move `mid` yet)

---

### 🔁 **Why this works**:
It **places 0s at the front**, **2s at the back**, and **leaves 1s in the middle**.

---

### 🔄 **Function Breakdown**:

```cpp
void swap(vector<int> &arr, int i, int j)
```
Swaps two elements — classic helper.

```cpp
vector<int> sortBalls(vector<int> balls)
```
Implements DNF sort using `low`, `mid`, `high` pointers.

---

### 🖨️ **Output**:
Prints the sorted balls in order.

---

### 💡 Summary:
> This is a classic one-pass in-place sorting algorithm for arrays containing only 0s, 1s, and 2s, known as the **Dutch National Flag problem**. Efficient and clean! ✅

---

watch solution dude

Want a version with comments inline too?
*/