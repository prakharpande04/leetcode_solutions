class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        if(s.length()==0)
            return 0;
        else{
            for (int i=0; i<s.length(); i++){
                if(s[i] == 'I'){
                    if(s[i+1] == 'V'){
                        i++;
                        sum+=4;
                    }
                    else if(s[i+1] == 'X'){
                        i++;
                        sum+=9;
                    }
                    else{
                        sum += 1;
                    }
                }

                else if(s[i] == 'X'){
                    if(s[i+1] == 'L'){
                        sum+=40;
                        i++;
                    }
                    else if(s[i+1] == 'C'){
                        sum+=90;
                        i++;
                    }
                    else if(s[i+1] == 'D'){
                        sum+=490;
                        i++;
                    }
                    else if(s[i+1] == 'M'){
                        sum+=990;
                        i++;
                    }
                    else
                        sum+=10;
                }

                else if(s[i] == 'V')
                    sum+=5;

                else if(s[i] == 'L')
                    sum+=50;

                else if(s[i] == 'D')
                    sum+=500;

                else if(s[i] == 'M')
                    sum+=1000;

                else{
                    if(s[i+1] == 'D'){
                        sum+=400;
                        i++;
                    }
                    else if(s[i+1] == 'M'){
                        sum+=900;
                        i++;
                    }
                    else
                        sum+=100;
                }
            }
        }
        return sum;
    }
};
