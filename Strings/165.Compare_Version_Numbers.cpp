class Solution {
public:
    int compareVersion(string version1, string version2) {
        int l1 = 0, l2 = 0, r1 = 0, r2 = 0, num1 = 0, num2 = 0;
        int n = version1.size();
        int l = version2.size();

        // Loop until all parts of both versions are processed
        while (l1 < n || l2 < l) {
            num1 = 0; // Reset num1 for each segment
            num2 = 0; // Reset num2 for each segment
            
            // Move r1 to the next '.' or end of version1
            while (r1 < n && version1[r1] != '.') {
                r1++;
            }
            // Move r2 to the next '.' or end of version2
            while (r2 < l && version2[r2] != '.') {
                r2++;
            }

            // Extract the numeric value of the current segment from version1
            if (l1 < n) {
                num1 = stoi(version1.substr(l1, (r1 - l1)));
            }
            // Extract the numeric value of the current segment from version2
            if (l2 < l) {
                num2 = stoi(version2.substr(l2, (r2 - l2)));
            }

            // Compare the two extracted numbers
            if (num1 > num2) {
                return 1; // version1 is greater
            } else if (num2 > num1) {
                return -1; // version2 is greater
            }

            // Move l1 and l2 to the next segment (skip past '.')
            l1 = r1 + 1;
            l2 = r2 + 1;
            r1 = l1; // Reset r1 to start at the new segment
            r2 = l2; // Reset r2 to start at the new segment
        }

        return 0; // Versions are equal
    }
};
