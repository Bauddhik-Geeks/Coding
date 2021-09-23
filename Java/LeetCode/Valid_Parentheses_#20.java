class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        for(int i =0; i < s.length(); i++) {
            Character c = s.charAt(i);
            if(c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else {
                if(stack.empty()) return false;
                Character a = stack.pop();
                if(c == ')' && a != '(') return false;
                else if(c == '}' && a!= '{') return false;
                else if(c == ']' && a!= '[') return false;
            }
        }
        if(stack.empty()) return true;
        return false;
    }
}

// Video Solution
// https://www.youtube.com/watch?v=9kmUaXrjizQ
