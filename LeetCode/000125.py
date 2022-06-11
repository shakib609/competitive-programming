class Solution:
    def isPalindrome(self, s: str) -> bool:
        result_s = ""
        for ch in s.lower():
            if ch.isalnum():
                result_s += ch
        length = len(result_s)
        i, j = 0, length - 1
        while i <= j:
            if result_s[i] != result_s[j]:
                return False
            i += 1
            j -= 1
        return True
