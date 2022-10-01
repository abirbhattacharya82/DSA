class Solution {
    public int lengthOfLastWord(String s) {
        String z=s.trim();
        String word=z.substring(z.lastIndexOf(' ')+1);
        return word.length();
    }
}
