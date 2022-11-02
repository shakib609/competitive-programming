export function sortedSquaredArray(array: number[]) {
  const result: number[] = [];
  let left = 0,
    right = array.length - 1;
  while (left <= right) {
    const v1 = array[left];
    const v2 = array[right];
    const squaredLeft = v1 * v1;
    const squaredRight = v2 * v2;
    if (squaredLeft >= squaredRight) {
      result.push(squaredLeft);
      left++;
    } else {
      result.push(squaredRight);
      right--;
    }
  }
  return result.reverse();
}
