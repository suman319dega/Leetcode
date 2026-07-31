class FreqStack {
    private Map<Integer, Integer> freq;
    private Map<Integer, Stack<Integer>> group;
    private int maxFreq;

    public FreqStack() {
        freq = new HashMap<>();
        group = new HashMap<>();
        maxFreq = 0;
    }
    
    public void push(int val) {
        // 1. Update frequency for 'val'
        int f = freq.getOrDefault(val, 0) + 1;
        freq.put(val, f);
        
        // 2. Track global maximum frequency
        if (f > maxFreq) {
            maxFreq = f;
        }
        
        // 3. Push element to the stack corresponding to its frequency
        group.computeIfAbsent(f, k -> new Stack<>()).push(val);
    }
    
    public int pop() {
        // 1. Retrieve the most recent element at the maximum frequency level
        Stack<Integer> maxFreqStack = group.get(maxFreq);
        int val = maxFreqStack.pop();
        
        // 2. Decrement the frequency count of the popped element
        freq.put(val, freq.get(val) - 1);
        
        // 3. If the highest frequency stack is now empty, decrement maxFreq
        if (maxFreqStack.isEmpty()) {
            maxFreq--;
        }
        
        return val;
    }
}

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack obj = new FreqStack();
 * obj.push(val);
 * int param_2 = obj.pop();
 */