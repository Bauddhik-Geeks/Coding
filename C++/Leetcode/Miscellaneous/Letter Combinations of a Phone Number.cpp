class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        int n=digits.size();
        map<int,string> m;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        map<char,int> mm;
        mm['2']=2;
        mm['3']=3;
        mm['4']=4;
        mm['5']=5;
        mm['6']=6;
        mm['7']=7;
        mm['8']=8;
        mm['9']=9;
        if(n==1)
        {
           string s1=m[mm[digits[0]]];
           for(int i=0;i<s1.size();i++)
           {
               string ss="";
               ss+=s1[i];
               v.push_back(ss);
           }
        }
        else if(n==2)
        {
            string s1=m[mm[digits[0]]],s2=m[mm[digits[1]]];
            for(int i=0;i<s1.size();i++)
            {
                string ss="";
                ss+=s1[i];
                for(int j=0;j<s2.size();j++)
                {
                    ss+=s2[j];
                    v.push_back(ss);
                    ss=s1[i];
                }
            }
        }
else if(n==3)
        {
            string s1=m[mm[digits[0]]],s2=m[mm[digits[1]]],s3=m[mm[digits[2]]];
            for(int i=0;i<s1.size();i++)
            {
                string ss="";
                ss+=s1[i];
                for(int j=0;j<s2.size();j++)
                {
                    ss+=s2[j];
                    for(int k=0;k<s3.size();k++)
                    {
                        ss+=s3[k];
                        v.push_back(ss);
                        ss.pop_back();
                    }
                    ss=s1[i];
                }
            }
        }
        else if(n==4)
        {
            string s1=m[mm[digits[0]]],s2=m[mm[digits[1]]],s3=m[mm[digits[2]]],s4=m[mm[digits[3]]];
            for(int i=0;i<s1.size();i++)
            {
                string ss="";
                ss+=s1[i];
                for(int j=0;j<s2.size();j++)
                {
                    ss+=s2[j];
                    for(int k=0;k<s3.size();k++)
                    {
                        ss+=s3[k];
                        for(int l=0;l<s4.size();l++)
                        {
                            ss+=s4[l];
                            v.push_back(ss);
                            ss.pop_back();
                        }
                        ss.pop_back();
                    }
                    ss.pop_back();
                }
            }
        }
        return v;
    }
};
