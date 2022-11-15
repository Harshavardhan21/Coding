class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = NULL;
        ListNode *temp;
        while (list1 != NULL && list2 != NULL)
        {
            ListNode *fun;
            int val;
            if (list1->val > list2->val)
            {
                fun = new ListNode(list2->val);
                list2 = list2->next;
            }
            else
            {
                fun = new ListNode(list1->val);
                list1 = list1->next;
            }
            if (head == NULL)
            {
                head = fun;
                temp = head;
            }
            else
            {
                temp->next = fun;
                temp = temp->next;
            }
        }
        while (list1 != NULL)
        {
            ListNode *fun = new ListNode(list1->val);
            if (head == NULL)
            {
                head = fun;
                temp = head;
            }
            else
            {
                temp->next = fun;
                temp = temp->next;
            }
            list1 = list1->next;
        }
        while (list2 != NULL)
        {
            ListNode *fun = new ListNode(list2->val);
            if (head == NULL)
            {
                head = fun;
                temp = head;
            }
            else
            {
                temp->next = fun;
                temp = temp->next;
            }
            list2 = list2->next;
        }
        return head;
    }
};