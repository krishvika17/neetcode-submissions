class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        sort(people.begin(), people.end(), greater<int>());

        int n = people.size();
        int i = 0;       // heaviest remaining
        int j = n - 1;   // lightest remaining
        int count = 0;

        while (i <= j) {

            if (i == j) {      // only one person left
                count++;
                break;
            }

            if (people[i] + people[j] <= limit) {
                i++;//those people are already put onto a boat
                j--;
            }
            else {
                i++;//heavier in single boat and taken
            }
             count++;
        }

        return count;
    }
};