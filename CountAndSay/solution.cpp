string buildString(string num){
    int freq = 1;
    char str = num[0];
    string result = "";

    for(int i=1;i<num.size();i++){
        if(str==num[i]) freq++;
        else{
            result.push_back((char)('0'+freq));
            result.push_back(str);

            str = num[i];
            freq = 1;
        }
    }

    result.push_back((char)('0'+freq));
    result.push_back(str);

    return result;
}

string writeAsYouSpeak(int n){
    string str = "1";

    // build the string for n-1 times
    for(int i=0;i<n-1;i++){
        str = buildString(str);
    }

    return str;
}