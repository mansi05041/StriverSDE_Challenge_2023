string longestCommonPrefix(vector<string>& arr, int n){
    string answer = "";

    // compare each character of first string with the rest of strings
    for(int i=0;i<arr[0].size();i++){
        char ch = arr[0][i];
        bool match = true;

        // iterate for all the remaining strings
        for(int j=1;j<n;j++){
            if(arr[j].size()<i || arr[j][i]!=ch){
                match = false;
                break;
            }
        }

        if(!match) break;
        else answer+=ch;
    }
    return answer;
}