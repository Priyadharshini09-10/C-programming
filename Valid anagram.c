#include <string.h>

void reverse(char* s, int start, int end) {
    while(start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

char* reverseStr(char* s, int k) {
    
    int n = strlen(s);
    
    for(int i = 0; i < n; i += 2*k) {
        
        int left = i;
        int right = i + k - 1;
        
        if(right >= n)
            right = n - 1;
        
        reverse(s, left, right);
    }
    
    return s;
}
