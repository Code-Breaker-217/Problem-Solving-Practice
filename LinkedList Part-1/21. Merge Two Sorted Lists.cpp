// Using Loops/iterative approach

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* mainhead;
        ListNode* head;
        if(list1 == NULL && list2 == NULL)  return NULL;
        if(list1 == NULL){
            return list2;
        }
        else if(list2 == NULL){
            return list1;
        }
        else{
            if(list1->val < list2->val){
                head = list1;
                list1 = list1->next;
            }
            else{
                head = list2;
                list2 = list2->next;
            }
        }

        mainhead = head;

        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                head->next = list1;
                list1 = list1->next;
                head = head->next;
            }
            else{
                head->next = list2;
                list2 = list2->next;
                head = head->next;
            }
        }

        if(list1 == NULL){
            head->next = list2;
        }
        else{
            head->next = list1;
        }

        return mainhead;
    }
};


// Using Recursion

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		// if list1 happen to be NULL
		// we will simply return list2.
		if(l1 == NULL){
			return l2;
		}
		
		// if list2 happen to be NULL
		// we will simply return list1.
		if(l2 == NULL){
			return l1;
		} 
		
		// if value pointend by l1 pointer is less than equal to value pointed by l2 pointer
		// we wall call recursively l1 -> next and whole l2 list.
		if(l1 -> val <= l2 -> val){
			l1 -> next = mergeTwoLists(l1 -> next, l2);
			return l1;
		}
		// we will call recursive l1 whole list and l2 -> next
		else{
			l2 -> next = mergeTwoLists(l1, l2 -> next);
			return l2;            
		}
	}
};	

