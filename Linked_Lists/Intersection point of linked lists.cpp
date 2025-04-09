/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        map<ListNode *,int> mpp;
        while(temp1!=NULL){
          mpp[temp1]++;
          temp1=temp1->next;
        }
        while(temp2!=NULL){
            if(mpp.find(temp2)!=mpp.end()){
                return temp2;
            }
            else{
                temp2=temp2->next;
            }
        }
        return NULL;
    }
};
