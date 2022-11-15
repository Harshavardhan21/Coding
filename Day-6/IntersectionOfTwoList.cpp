class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *a, ListNode *b)
    {
        stack<ListNode *> s1, s2;
        while (a != NULL)
        {
            s1.push(a);
            a = a->next;
        }
        while (b)
        {
            s2.push(b);
            b = b->next;
        }
        ListNode *ret = NULL;
        while (!s1.empty() && !s2.empty() && s1.top() == s2.top())
        {
            ret = s1.top();
            s1.pop();
            s2.pop();
        }
        return ret;
    }
};