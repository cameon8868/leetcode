class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        res = ListNode(0)
        cur = res
        carry = 0
        while l1 != None or l2 != None or carry != 0:
            total = carry
            if l1:
                total += l1.val
                l1 = l1.next
            if l2:
                total += l2.val
                l2 = l2.next
            cur.next = ListNode(total % 10)
            cur = cur.next
            carry = total // 10
        return res.next
            