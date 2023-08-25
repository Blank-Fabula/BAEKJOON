class Solution {
    int[] alpha = new int[58];
    public String solution(String s) {
        for (char c : s.toCharArray()) { alpha[c - 'A']++; }
        String answer = "";
        for (int i = 57; i >= 32; i--) {
            for (int j = 0; j < alpha[i]; j++) { answer += (char)(i + 'A'); }
        }
        for (int i = 25; i >= 0; i--) {
            for (int j = 0; j < alpha[i]; j++) { answer += (char)(i + 'A'); }
        }
    return answer; }
}