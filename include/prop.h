//
//  prop.h
//  pjsh
//
//  Created by Siddhant Khanna on 08/04/16.
//  Copyright © 2016 Siddhant Khanna. All rights reserved.
//



void concatenate(char p[], char q[]) {
    int c, d;
    
    c = 0;
    
    while (p[c] != '\0') {
        c++;
    }
    
    d = 0;
    
    while (q[d] != '\0') {
        p[c] = q[d];
        d++;
        c++;
    }
    
    p[c] = '\0';
}







typedef char str[64];

typedef int arr[128];

char * cut(str in,int c){
    
    str _out = "";
    
    int y = c;
    for(c<=64;c==64;c++){
        _out[c-y]=in[c];
       
    }
    
    return _out;
}


