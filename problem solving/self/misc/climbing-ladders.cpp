#include <bits/stdc++.h>
using namespace std;

/*
given a no. n tell me how many ways there are to reach that
ladder
*/

/* what if n is 0? there are only 1 one way
if you wana reach 1, there is only 1 one way
if u wanna reach 2, u can go 1 - 1 , 2, 
if u wanna reach 3, you can go 111, 21, 12, 3
if u wanna reach 4, 1111, 22, 13, 31, 4, 121,112, 211,
*/

int countWays(int n) {

	if (n < 0) {
		return 0;
	}

	if (n == 0 or n == 1) {
		return 1;
	}

	int a, b, c, ans;


	// q. why did we do this?
	/*
	i mean you can either go one less step,
	either take a step of 2
	or step of 3? right?

	*/
	a = countWays(n - 1);
	b = countWays(n - 2);
	c = countWays(n - 3);

	ans = a + b + c;

	return ans;

}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n; cin >> n;

	int ans = countWays(n);	
	cout << ans;

}


/*
Yeah bro, I got you — you're asking:

> **Why do we take `n - 1`, `n - 2`, and `n - 3` in `countWays(n)`?**

---

### 🪜 Imagine climbing a ladder with `n` steps

At **each point**, you're allowed to take either:
- 1 step,
- 2 steps, or
- 3 steps.

So, to reach the `n`th step:

- You could’ve been at **(n - 1)** and took **1 step**
- Or at **(n - 2)** and took **2 steps**
- Or at **(n - 3)** and took **3 steps**

---

### 🚀 So basically:

```cpp
countWays(n) = countWays(n - 1) + countWays(n - 2) + countWays(n - 3)
```

You’re **trying all 3 possible last moves**, and **adding up** the number of ways to reach those positions.

---

### 💡 Example for `n = 4`:

- From step `3` → take `+1` → ways = `countWays(3)`
- From step `2` → take `+2` → ways = `countWays(2)`
- From step `1` → take `+3` → ways = `countWays(1)`

So, total = `countWays(3) + countWays(2) + countWays(1)`

---

Let me know if you want a DP version of this for faster results 🚀
*/