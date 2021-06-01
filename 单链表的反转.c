力扣206

struct ListNode* reverseList(struct ListNode* head)
{
    //当这个链表为空，或者只有一个元素，返回的只有他本身
    if (head == NULL || head->next == NULL)
    {
        return head;

    }
    //有两个以上的元素的话，再发生反转，让指针的指向顺序倒过来；
    else {
        struct ListNode* n1 = NULL;
        struct ListNode* n2 = head;
        struct ListNode* n3 = n2->next;
        //反转法
        while (n3 != NULL)
        {

            n2->next = n1;
            n1 = n2;
            n2 = n3;
            n3 = n3->next;
        }
        n2->next = n1;
        return n2;
    }
}