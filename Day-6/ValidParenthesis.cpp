class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> temp;
        int i = 0;
        string a = "([{";
        while (i < s.length())
        {
            if (a.find(s[i]) < a.length())
            {
                temp.push(s[i]);
            }
            else
            {
                if (temp.empty() || ((s[i] == ')' && temp.top() != '(') || (s[i] == ']' && temp.top() != '[') || (s[i] == '}' && temp.top() != '{')))
                {
                    return false;
                }
                else
                {
                    temp.pop();
                }
            }
            i++;
        }
        if (temp.empty())
        {
            return true;
        }
        return false;
    }
};