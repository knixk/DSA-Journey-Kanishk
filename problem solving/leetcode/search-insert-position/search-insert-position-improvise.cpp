
/*
basically we're given an arr,
and a target,


basically we need to return the position of the elemt is present, otherwise where we should insert the ele

we can solve this with binary search easily,


if binary search couldn't find it,
return the left pointer,
as it contains the idx,

why not right?

it returned one less than the idx it should be present at so don't use right


ummm since right is basically mid - 1,
don't u think, that the idx would be worng?
so let's try to iterate over the arr,
we check if the cur letter is less than or equal this one, 
if it is, then we increment, otherwise we need to return this idx
    


the issue is we don't know so we need to go more and more further


turns out if u do binary search on this, 
you will be able to get the ans,
so lets try doing it okey?
*/
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {

            int n = nums.size();
            int left = 0;
            int right = n - 1;

            while (left <= right) { // note we can, go till i <= j, if it crosses, then we end this..
                // question. but why we don't go till i < j?
                // int mid = (i + j) / 2;
                int mid = left + (right - left) / 2; // Calculate mid to avoid overflow
                // this mid seems betters
                /*
                let's say size was 4,
                left is 0
                right is 3

                so,
                0 + (3 - 0) / 2
                
                2)3(1
                  2
                  1 

                  so we get one basically

                */

                if (nums[mid] == target) {
                    return mid; // return this idx, cuz it found it
                } else if (nums[mid] > target) {
                    // go left
                    right = mid - 1;
                } else {
                    // go right
                    left = mid + 1;
                }
            }

            // after this is exhausted and we couldn't find it,
            // basically left pointer contains our ans;

            return left;

        }
    };


    /*
    gems:
    Great questions! Let's break them down **in your style** for **crystal-clear understanding.**  

---

### **1️⃣ Why don't we do `int mid = (i + j) / 2;`?**
**Issue:** This can cause **integer overflow** when `i` and `j` are large.  

#### **Example**
Imagine `i = 2,000,000,000` and `j = 2,000,000,000`.  

If we do:
```cpp
int mid = (i + j) / 2;
```
➡️ `i + j = 4,000,000,000` (which exceeds `INT_MAX = 2,147,483,647` in C++).  
➡️ **Integer overflow happens, and `mid` gets a wrong negative value!**  

#### **Correct way to calculate `mid`:**
```cpp
int mid = i + (j - i) / 2;
```
🔹 **Why does this work?**  
- `j - i` **never exceeds** `INT_MAX` because it's always within the array size.  
- This prevents integer overflow.  

---

### **2️⃣ Why can’t we return `right` pointer as the answer?**
The `right` pointer does **not always point to the correct insertion index** after the loop ends.  
We must return `left`, **not `right`**.  

#### **Example where returning `right` is wrong**  
```cpp
nums = [1, 3, 5, 6]
target = 2
```
#### **Step-by-step binary search:**
| Step | `left` | `right` | `mid` | `nums[mid]` | Action |
|------|--------|--------|------|-----------|----------|
| 1️⃣ | 0 | 3 | 1 | `3` | `3 > 2`, move `right = mid - 1 = 0` |
| 2️⃣ | 0 | 0 | 0 | `1` | `1 < 2`, move `left = mid + 1 = 1` |

🔹 **Loop exits, now:**  
- `left = 1`
- `right = 0`  
- **Correct answer is `1` (where 2 should be inserted).**  

🔹 **If we return `right`, we get `0` (WRONG!).**  
🔹 **If we return `left`, we get `1` (CORRECT!).**  

---

### **🚀 Summary**
✅ **Use `mid = i + (j - i) / 2`** to prevent **integer overflow**.  
✅ **Return `left`, NOT `right`**, because `left` holds the correct insertion index after the loop.  

Let me know if this makes sense! 🔥
    */