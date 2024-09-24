//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,vector<int> &arr3) {
    
        map<int,int> mp1;
        map<int,int> mp2;
        map<int,int> mp3;
        vector<int> v;
        for(int i=0; i<arr1.size(); i++){
            mp1[arr1[i]]++;
        }
        for(int i=0; i<arr2.size(); i++){
            if(mp1.find(arr2[i])!=mp1.end()){
                mp2[arr2[i]]++;
            }
        }
        if(mp2.empty()){
            v.push_back(-1);
            return v;
        }
        for(int i=0; i<arr3.size(); i++){
            if(mp2.find(arr3[i])!=mp2.end()){
                mp3[arr3[i]]++;
            }
        }
        if(mp3.empty()){
            v.push_back(-1);
            return v;
        }
        for(auto k:mp3){
            v.push_back(k.first);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends
