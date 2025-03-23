//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Definition of a Node in the linked list
class Node {
  public:
    int data;  // Data stored in the node
    Node* next;  // Pointer to the next node

    // Default constructor (creates an empty node with data = 0)
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterized Constructor (creates a node with a given data value)
    Node(int data) {
        this->data = data;
        this->next = NULL;  // Initialize the next pointer as NULL
    }
};

// } Driver Code Ends


class Solution {
  public:
    // Function to construct a linked list from a given vector of integers
    Node* constructLL(vector<int>& arr) {
        int n = arr.size();  // Get the size of the input array

        // Create the head node with the first element of the array
        Node* head = new Node(arr[0]);

        // Temporary pointer to track the last inserted node
        Node* temp = head;

        // Iterate through the array starting from the second element
        for (int i = 1; i < n; i++) {
            // Create a new node for the current element
            Node* mover = new Node(arr[i]);

            // Link the previous node to the new node
            temp->next = mover;

            // Move the temp pointer to the newly created node
            temp = mover;
        }

        // Return the head of the constructed linked list
        return head;
    }
};
