class Solution
{
public:
    ListNode *first;
    int c = 0;
    void check(ListNode *last)
    {
        if (last != NULL)
        {
            check(last->next);
            if (first->val != last->val)
            {
                c++;
            }
            first = first->next;
        }
    }
    bool isPalindrome(ListNode *head)
    {
        first = head;
        ListNode *last = head;
        check(first);
        if (c == 0)
        {
            return true;
        }
        return false;
    }
};