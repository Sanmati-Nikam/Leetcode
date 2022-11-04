class Solution {
public:
    bool isVowel(char ch){      //function to check if given charachter is charcter is vowel
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int i=0,k=s.size()-1;
        while(i<k){                              //stop after swapping left side vowels with right side
            if(isVowel(s[i])){ 
                while(k>=0 && !isVowel(s[k]))    //till we find a vowel from right side of string and k is not less than 0
                    k--;
                int temp=s[i];                   //swap vowel from lest side of string to right side
                s[i]=s[k];
                s[k--]=temp;
            }
            i++;
        }
        return s;
    }
};