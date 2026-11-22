class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string> name;
        int alice = 0, bob = 0;
        int n = rain.size();

        for (int i = 0; i < n; i++) {
            bool a = (i < n - 1 && rain[i] == 1 && rain[i + 1] == 1);
            bool b = (rain[i] == 1);

            if (a && b) {
                if (alice <= bob) {
                    name.push_back("Alice");
                    alice++;
                }
                else {
                    name.push_back("Bob");
                    bob++;
                }
            }
            else if (a) {
                name.push_back("Alice");
                alice++;
            }
            else if (b) {
                name.push_back("Bob");
                bob++;
            }
            else {
                name.push_back("None");
            }
        }

        return name;
    }
};