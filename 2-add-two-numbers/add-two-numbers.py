class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        # Dummy node to start the new list
        dummy = ListNode()
        temp = dummy
        carry = 0

        # Loop until both lists are processed or there is a carry
        while l1 or l2 or carry:
            # Get values from the current nodes or use 0 if the node is None
            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0

            # Calculate the sum and the new carry
            total = val1 + val2 + carry
            carry = total // 10
            value = total % 10

            # Create a new node with the current value and move the pointer
            temp.next = ListNode(value)
            temp = temp.next

            # Move to the next nodes in the input lists if they exist
            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next

        # Return the head of the new linked list
        return dummy.next