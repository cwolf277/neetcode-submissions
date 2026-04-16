class Solution {
public:

    //goal: 
    // implement encode
    // encode turns the array of strings into one whole string
    // and then returns it
    // decode will take that string and trun it back into an array

    //constraints:
    // 0 <= strs.length < 100
    // 0 <= strs[i].length < 200
    // strs[i] contains only UTF-8 characters.

    
    //brute force
    // encode:
    // we create a string enco
    // loop through the array
    // add the elements one at a time into the string
    // keep track of the size add the size to the string 
    // and a hash and then add the string
    // return enco
    // decode:
    // loop array
    // if thee string char is an integer
    // and the next one is a hash
    // grab the length
    // add the iterator by two
    // or next next one is a hash
    // grab the length
    // add the iterator by three
    // or next next next one is a hash
    // grab the length
    // add the iterator by four
    // and then add the string by the length into an array
    // add the iterator by length
    // return the array


    
    //alg1:
    // encode:
    // we create a string enco
    // loop through the array
    // add the elements one at a time into the string
    // keep track of the size add the size to the string and a hash and then add the string
    // return enco
    // decode:
    //
    // 

    string encode(vector<string>& strs) {
        string enco;
        for(auto& st: strs){
            enco+= to_string(st.size()) + "#" + st;
        }
       
        return enco;
    }

    vector<string> decode(string s) {
        vector<string> deco;
        int length =0;
        int i =0;
        while(i < s.size()){
            if(isdigit(s[i])){
                if(i + 1 < s.size() && s[i+1] == '#'){
                    length = stoi(s.substr(i, 2));
                    i+=2;
                }else if(i + 2 < s.size() && s[i+2] == '#'){
                    length = stoi(s.substr(i, 2));
                    i+=3;
                }else if (i + 3 < s.size() && s[i+3] == '#'){
                    length = stoi(s.substr(i, 3));
                    i+=4;
                }
            string de = s.substr(i, length);
            deco.push_back(de);
            i+=length;

            }
           
        }

        return deco;

    }
};
