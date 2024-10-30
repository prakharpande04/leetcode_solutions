class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        if(num/1000 != 0){
            for(int i = 0; i<num/1000; i++){
                s+='M';
            }
            num%=1000;
        }

        if(num/100 != 0){
            if(num/100 == 4){
                s+='C';
                s+='D';
            }
            
            else if(num/100 == 9){
                s+='C';
                s+='M';
            }
            
            else if(num/100 >= 5){
                s+='D';
                for(int i=0; i<(num/100)-5; i++)
                    s+='C';
            }
            
            else{
                for(int i = 0; i<num/100; i++){
                    s+='C';
                }
            }
                
            num%=100;
        }

        if(num/10 != 0){
            if(num/10 == 4){
                s+='X';
                s+='L';
            }
            
            else if(num/10 == 9){
                s+='X';
                s+='C';
            }
            
            else if(num/10 >= 5){
                s+='L';
                for(int i=0; i<(num/10)-5; i++)
                    s+='X';
            }
            
            else{
                for(int i = 0; i<num/10; i++){
                    s+='X';
                }
            }
                
            num%=10;
        }

        if(num>0){
            if(num == 4){
                s+='I';
                s+='V';
            }

            else if(num == 9){
                s+='I';
                s+='X';
            }
            
            else if(num>=5)
            {
                s+='V';
                for(int i=0; i<num-5; i++)
                    s+='I';
            }

            else{
                for(int i=0; i<num; i++)
                    s+='I';
            }
        }

        return s;
    }
};
