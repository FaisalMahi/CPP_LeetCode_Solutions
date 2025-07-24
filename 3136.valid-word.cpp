class Solution
{
public:
    bool isValid(string word)
    {
        string s = tolower(word);
        if (s.size() < 3)
            return false;

        int cntNum = 0, cntVowel = 0, cntConsonant = 0;

        for (char c : s)
        {
            if (!isalnum(c))
                return false;

            if (isdigit(c))
                cntNum++;
            else if (isVowel(c))
                cntVowel++;
            else
                cntConsonant++;
        }
        if (cntNum < 1 || cntVowel < 1 || cntConsonant < 1)
        {
            return false;
        }
        else
            return true;
    }
};
