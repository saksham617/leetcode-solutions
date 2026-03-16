int lengthOfLongestSubstring(char* s) {

        int Lastindex[256];

        for ( int i=0 ; i<256 ; i++){
            Lastindex[i] = -1;
        }

        int start = 0;
        int maxLength = 0;

        for (int i= 0; s[i]!='\0' ; i++ ){

            if ( Lastindex[s[i]] >= start){
                start = Lastindex[s[i]] + 1;

            }
            Lastindex[s[i]]= i;
            int lenght = i - start + 1 ;
            if ( lenght > maxLength)
                maxLength = lenght;
            
        }
        return maxLength;
    
}
