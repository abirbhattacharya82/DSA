# Longest K unique characters substring
#### Given a string you need to print the size of the longest possible substring that has exactly K unique characters. If there is no possible substring then print -1.

Example 1:

Input:
S = "aabacbebebe", K = 3 <br />
Output: 7 <br />
Explanation: "cbebebe" is the longest
substring with K distinct characters. <br />

Example 2:

Input: 
S = "aaaa", K = 2 <br />
Output: -1 <br />
Explanation: There's no substring with K
distinct characters. 

### Main steps to solve :<br />
1.Create a map of char as key and integer as value.<br />
2.Then,we will iterate through string using two pointers,the two pointers will tell us when the size of window is less ,equal or greater than K.<br />
3.When window size hits k,we will save the ans which is the size of map,as size of map will tell us k distinct characters.<br />
4.If window size exceeds k,then we will remove calculation for leftmost pointer until size is greater than k.
