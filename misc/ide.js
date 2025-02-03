



function checkPrime (n) {
  
  if (n == 1 || n == 0) {
    return false
  }
  
  for (let i = 2; i <= n; i++) {
    for (let j = i; j <= Math.floor(i / 2) + 1; j++) {
      if (i * j == n) {
        return false;
      }
    }  
  }
  
  
  return true;
  
  
}


const ans = checkPrime(3);
console.log(ans)