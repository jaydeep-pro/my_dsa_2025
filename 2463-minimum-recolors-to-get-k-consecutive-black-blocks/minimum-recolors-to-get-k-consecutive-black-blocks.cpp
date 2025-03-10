class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mini = 0;
        int n = blocks.size();
        int cnt = 0;

        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') {
                cnt++;
            }
        }

        mini = cnt;

        for (int i = k; i < n; i++) {
            if (blocks[i - k] == 'W' && blocks[i] == 'B') {
                cnt--;
            }
          else  if (blocks[i - k] == 'B' && blocks[i] == 'W') {
                cnt++;
            }

            mini = min(cnt, mini);
        }

        return mini;
    }
};