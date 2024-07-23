class Solution {
public:
    int romanToInt(std::string s) {
        int countI = 0, countV = 0, countX = 0, countL = 0, countC = 0, countD = 0, countM = 0;

        for (int i = 0; i < s.size(); i++) {
            switch (s[i]) {
                case 'I':
                    countI++;
                    break;
                case 'V':
                    countV++;
                    break;
                case 'X':
                    countX++;
                    break;
                case 'L':
                    countL++;
                    break;
                case 'C':
                    countC++;
                    break;
                case 'D':
                    countD++;
                    break;
                case 'M':
                    countM++;
                    break;
                default:
                    // Handle invalid characters if needed
                    break;
            }
        }
        
        int number = (1 * countI) + (5 * countV) + (10 * countX) + (50 * countL) +
                     (100 * countC) + (500 * countD) + (1000 * countM);

if (s.find("IV") != std::string::npos) number -= 2;
        if (s.find("IX") != std::string::npos) number -= 2; 
        if (s.find("XL") != std::string::npos) number -= 20; 
        if (s.find("XC") != std::string::npos) number -= 20;
        if (s.find("CD") != std::string::npos) number -= 200; 
        if (s.find("CM") != std::string::npos) number -= 200; 

        return number;
    }
};