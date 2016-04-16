//
//  log.h
//  pjsh
//
//  Created by Siddhant Khanna on 08/04/16.
//  Copyright © 2016 Siddhant Khanna. All rights reserved.
//

void log(str in ){
    
    str echo="echo ";
    concatenate(echo,in);
    system(echo);
    concatenate(echo, "> ./log.txt");
    system(echo);
   
}


void system(str *a, str *b){
    concatenate(*a,*b);
    system(*a);
}


int console_main(str user){
    
    int enter = 0;
    log("Inside Console");
    str input;
    int logout = 0;
    log("Consol Ready to Go");
    system("sudo su -c exit");
    for(enter>=0;enter<4096;enter++){
        printf(user);
        printf(":~");
        gets(input);
        if(input!="term"){
        system(input);
        }
        else{
            puts("A Project Management Console");
            
        }
    }
    
    return(enter);
}


class console{
public:
  const str sh = "bash ";
  const str echo = "echo ";
  const str disk = "hdut ";
  const str xar = "cxar ";
  const str tar = "ctar ";
  const str bzip = "bzip ";
  const str install = "inst ";
  const str nimage = "newi ";
  
    
    char  *input(str *in){
        str path ;
        char *y=path;
        
        y = cut(*in,5);
        
        return y;
    }
    
    

    
    console(str _user){
        
        console_main(_user);
        }
        
    
    
};