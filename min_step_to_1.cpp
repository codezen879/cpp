#include<vector>
int countStepsToOne(int n) {
	
    vector<int> minCount(n + 1);
    minCount[1] = 0;
    
    for(int i = 2; i < n + 1; i++) {
    	if(i % 2 != 0 and i % 3 == 0) {
            minCount[i] = 1 + min(minCount[i - 1], minCount[i / 3]);
        } else if (i % 2 == 0 and i % 3 != 0) {
            minCount[i] = 1 + min(minCount[i - 1], minCount[i / 2]);
        } else if(i % 2 == 0 and i % 3 == 0) {
            minCount[i] = 1 + min(minCount[i - 1], min(minCount[i / 2], minCount[i / 3]));
        } else {
            minCount[i] = 1 + minCount[i - 1];
        }
    }
    
    return minCount[n];
}
//youtube link:https://www.youtube.com/watch?v=ZXnMT4xN-GI
