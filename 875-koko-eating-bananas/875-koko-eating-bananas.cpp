class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = 1000000000;
        while(left < right) {
            int mid = left + (right - left) / 2;
            if(canEatInTime(piles, mid, h)) { right = mid; }
            else { left = mid + 1; }
        }
        return left;
    }
    
    bool canEatInTime(vector<int>& piles, int mid, int h) {
        int hours = 0;
        for(int pile: piles) {
            int div = pile / mid;
            hours += div;
            if((pile % mid) != 0) { hours++; }
        }
        return hours <= h;
    }
};


// https://leetcode.com/problems/koko-eating-bananas/discuss/1703687/JavaC%2B%2B-A-very-very-well-detailed-explanation


// Resources
// https://www.youtube.com/watch?v=oayAjb2e9gM