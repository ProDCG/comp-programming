package interview;

import java.util.PriorityQueue;

class Blackrock_gg_2J {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        int[] scores = {45, 67, 89, 23, 99, 15, 76, 82, 54};
        
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        for (int n : scores) {
            if (minHeap.size() < 5) {
                minHeap.add(n);
            } else if (minHeap.peek() < n) {
                // if the score is greater than the smallest in the heap, replace the smallest 
                minHeap.poll(); // removes the smallest element
                minHeap.add(n);
            }
        }

        while (!minHeap.isEmpty()) {
            System.out.println(minHeap.poll() + " ");
        }
    }
}