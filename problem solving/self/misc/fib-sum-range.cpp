
#include <bits/stdc++.h>
#define pb push_back
#define lb lower_bound
using namespace std;

int fib_sum_range(int s, int e) {

	vector <int> fibArr;

	int n = 2;
	int ans = 0;

	fibArr.pb(0);
	fibArr.pb(1);

	while (fibArr[n - 1] < e) {	

		int last_one = fibArr[n - 1]; 
		int last_two = fibArr[n - 2];
		int next = last_one + last_two;

		fibArr.pb(next);
		n++;
	}

	int startIdx = -1;
	int endIdx = n - 1;

	for (int i = 0; i < n; i++) {
		if (fibArr[i] == s) {
			startIdx = i;
		}
	}

	if (startIdx == -1 or fibArr[endIdx] != e) {
		return -1;
	}

	for (int i = startIdx; i <= endIdx; i++) {
		ans += fibArr[i];
	}

	return ans;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int s, e;
	cin >> s; 
	cin >> e;

	int ans = fib_sum_range(s, e);

	cout << ans;

	return 0;	
}

/*

watch solution too

*/

/*
create a vector called fibArr to store fibonacci numbers

then i added 0 and 1 manually to it
coz well, that's how fib starts

now i generate the rest of the fibonacci numbers,
till the last one is less than 'e' (our end value)

in each step,
i take last two values and push their sum into the fib array

once done, i look for the index where the start value 's' is
also keep note of where 'e' is (it's the last one generated)

if i can't find 's' in the array, or if 'e' isn't even the last one generated,
just return -1

if all good, i loop from startIdx to endIdx
and keep adding those values to 'ans'

then finally return ans
*/





/*
Alright bro, let’s go **line by line** and clear this up properly with the missing context added — you'll get it now 💡

---

```cpp
int startIdx = -1;
int endIdx = n - 1;
```

💬 *We’re initializing `startIdx` to `-1` just to mark that we haven’t found the starting value `s` in the Fibonacci sequence yet.*

💬 *We set `endIdx = n - 1` because `n` is the length of `fibArr`, and `fibArr[n - 1]` is the last Fibonacci number generated — ideally it should be equal to `e` (our end value).*

---

```cpp
for (int i = 0; i < n; i++) {
    if (fibArr[i] == s) {
        startIdx = i;
    }
}
```

💬 *We go through the entire Fibonacci array to find where the number `s` (start value) exists. If we find it, we store its index in `startIdx`.*

---

```cpp
if (startIdx == -1 or fibArr[endIdx] != e) {
    return -1;
}
```

💬 *This is a check:*

- If `startIdx` is still `-1`, that means we **never found the start number `s`** in the generated Fibonacci numbers → ❌ invalid range.
- If the **last number** we generated (`fibArr[endIdx]`) **isn't equal to `e`**, that means we **never reached the desired end value** either → ❌ invalid range again.

*So we return `-1` if any of those fail.*

---

```cpp
for (int i = startIdx; i <= endIdx; i++) {
    ans += fibArr[i];
}
```

💬 *Now that we know both `s` and `e` exist in our Fibonacci sequence, we loop from `startIdx` to `endIdx` and sum all values.*

---

```cpp
return ans;
```

💬 *Finally, return the sum!*

---

### 🔁 In simple English:

You're generating a list of Fibonacci numbers.  
Then you're saying — "Yo, if both `s` and `e` exist in this list, give me the sum of all numbers from `s` to `e` in the Fibonacci sequence.  
But if either one is missing, I don't wanna deal with it, so just return -1."

Let me know if you want a version that allows `s` and `e` even if they’re not *exact* Fibonacci numbers but lie in between.
*/