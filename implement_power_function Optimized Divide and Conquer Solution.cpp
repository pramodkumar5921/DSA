/*

Given two integers, `x` and `n`, where `n` is non-negative, efficiently compute the power function `pow(x, n)`.

Input: x = -2, n = 10
Output: 1024
Explanation: pow(-2, 10) = 1024

Input: x = -3, n = 4
Output: 81
Explanation: pow(-3, 4) = 81

Input: x = 5, n = 0
Output: 1
Explanation: pow(5, 0) = 1

Input: x = -2, n = 3
Output: -8
Explanation: pow(-2, 3) = -8

*/

class Solution
{
public:
    long solve(int x,unsigned n){
    	if(n==0){
    		return 1L;
    	}
    	long po=solve(x,n/2);
    	if(n&1){
    		return x*po*po;
    	}
    
    		return po*po;

    }
	long power(int x, int n)
	{
		return solve(x,n);
	}
};
