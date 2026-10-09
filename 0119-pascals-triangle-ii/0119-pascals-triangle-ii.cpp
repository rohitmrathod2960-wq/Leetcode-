class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<int> row;
        long long value = 1;

        for (int j = 0; j <= rowIndex; j++) {
            row.push_back((int)value);

            value = value * (rowIndex - j) / (j + 1);
        }
        return row;
    }
};