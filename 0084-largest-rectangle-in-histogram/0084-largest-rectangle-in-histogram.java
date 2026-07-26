class Solution {
    public int largestRectangleArea(int[] heights) {

        Stack<Integer> stack = new Stack<>();
        int maxArea = 0;
        int n = heights.length;

        for (int i = 0; i < n; i++) {

            while (!stack.isEmpty() && heights[i] < heights[stack.peek()]) {

                int height = heights[stack.pop()];

                int rightBoundary = i;

                int leftBoundary;

                if (stack.isEmpty()) {
                    leftBoundary = -1;
                } else {
                    leftBoundary = stack.peek();
                }

                int width = rightBoundary - leftBoundary - 1;

                int area = height * width;

                maxArea = Math.max(maxArea, area);
            }

            stack.push(i);
        }

        while (!stack.isEmpty()) {

            int height = heights[stack.pop()];

            int rightBoundary = n;

            int leftBoundary;

            if (stack.isEmpty()) {
                leftBoundary = -1;
            } else {
                leftBoundary = stack.peek();
            }

            int width = rightBoundary - leftBoundary - 1;

            int area = height * width;

            maxArea = Math.max(maxArea, area);
        }

        return maxArea;
    }
}