import java.util.ArrayList;
import java.util.List;

class Solution {
    public boolean check(List<Integer>nums, int sum) {
        int i = 0, j = 0;
        int n = nums.size();
        int temp = 0;
        while (i < n && j < n) {
            temp += nums.get(i);
            while (temp > sum && j < i) {
                temp -= nums.get(j);
                j++;
            }
            if (temp == sum) {
                if (i - j + 1 >= 2) {
                    return true;
                }
            }
            i++;
        }
        return false;
    }

    public boolean checkSubarraySum(int[] nums, int k) {
        if (nums.length == 1) {
            return false;
        }
        if (k == 1) {
            return true;
        }
        // List<Integer> arr = new ArrayList<>();
        List<Integer>arr = new ArrayList<>();
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        for (int i = 0; i <= 100; i++) {
            if ((long) k * i <= sum) {
                arr.add(k * i);
            }
        }
        List<Integer> numList = new ArrayList<>();
            for (int num : nums) {
                numList.add(num);
            }
        for (int targetSum : arr) {
            if (check(numList, targetSum)) {
                return true;
            }
        }
        return false;
    }
}
