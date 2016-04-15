//
//  project.h
//  pjsh
//
//  Created by Siddhant Khanna on 08/04/16.
//  Copyright © 2016 Siddhant Khanna. All rights reserved.
//




class base {
    str name;
    str user;
    int cs = 0;
    int ts = 0;
    str size ;
    
    
    int newfs(str n , int c){
        log("New FileSystem Image");
        str mkdir = "mkdir ./" ;
        concatenate(mkdir, n);
        str cd = "cd ./" ;
        concatenate(cd,n);
        system(mkdir);
        system(cd);
        
        log("Ready to make image!");
        system("dd if=/dev/zero of=./filesystem  bs=1M count=102400");
        log("Finished creating new fs image");
        return 0;
    }
        void _init(str name,int size,str fs){
            
            
        }
        
};


typedef base _project;

