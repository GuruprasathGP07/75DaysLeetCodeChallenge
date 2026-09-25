#include <string>
#include <vector>
#include <set>
#include <stack>
#include <cctype>

using namespace std;

class Solution {
public:
    vector<string> braceExpansionII(string expression) {
        stack<vector<set<string>>> st;
        // Current level has a list of concatenation terms
        vector<set<string>> cur_level = {{""}};

        for (int i = 0; i < expression.size(); ++i) {
            char c = expression[i];

            if (c == '{') {
                // Save outer level state and start a fresh sub-expression
                st.push(move(cur_level));
                cur_level = {{""}};
            } else if (c == '}') {
                // Take the union of all terms in the completed block
                set<string> union_set;
                for (const auto& term : cur_level) {
                    union_set.insert(term.begin(), term.end());
                }

                // Restore outer level context
                cur_level = move(st.top());
                st.pop();

                // Concatenate the evaluated block with the previous term in this level
                cur_level.back() = cartesian_product(cur_level.back(), union_set);
            } else if (c == ',') {
                // Comma denotes union, so start a new term for upcoming concatenations
                cur_level.push_back({""});
            } else {
                // Read continuous alphabetic characters
                string s(1, c);
                while (i + 1 < expression.size() && isalpha(expression[i + 1])) {
                    s += expression[++i];
                }
                cur_level.back() = cartesian_product(cur_level.back(), {s});
            }
        }

        // Final union across all additive terms
        set<string> final_set;
        for (const auto& term : cur_level) {
            final_set.insert(term.begin(), term.end());
        }

        return vector<string>(final_set.begin(), final_set.end());
    }

private:
    set<string> cartesian_product(const set<string>& a, const set<string>& b) {
        set<string> res;
        for (const string& x : a) {
            for (const string& y : b) {
                res.insert(x + y);
            }
        }
        return res;
    }
};