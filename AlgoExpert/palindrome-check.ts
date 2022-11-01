export function isPalindrome(string: string) {
  let i = 0,
    j = string.length - 1,
    result = true;
  while (i < j) {
    if (string[i] !== string[j]) {
      result = false;
      break;
    }
    i++;
    j--;
  }
  return result;
}
