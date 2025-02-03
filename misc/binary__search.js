// implement binary search
function binarySearch(arr, key) {
  let ans = -1;

  let start = 0;
  let end = arr.length - 1;

  while (start <= end) {
    let mid = Math.floor((start + end) / 2);

    if (arr[mid] == key) {
      return mid;
    }

    if (key > arr[mid]) {
      // search on left
      start = mid + 1;
    } else {
      // search on right
      end = mid - 1;
    }
  }

  return -1;
}

let arr = [1, 2, 3, 10, 23, 32, 14, 90, 1, 5, 11];

let sorted = arr.sort((a, b) => a - b);
console.log(sorted)

const idx = binarySearch(sorted, 23);

console.log(idx);
