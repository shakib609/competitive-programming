export function isValidSubsequence(array: number[], sequence: number[]) {
  let sequencePointer = 0;
  for (let i = 0; i < array.length; i++) {
    if (sequence[sequencePointer] === array[i]) {
      sequencePointer++;
    }
  }
  return sequencePointer === sequence.length;
}
