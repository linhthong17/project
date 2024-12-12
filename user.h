/* Header file:  
*  Only contain declarations (prototypes) 
*  of classes/ functions/ user defined data types
*/
#ifndef _USER_H_     
#define _USER_H_ 


#include <iostream>
#include <string>
#include "function.h"
using namespace std;



class Item : Userinfo{
    private:    
        string itemname;
        string category;
        string description;
        string start;
        string end;
        string step;
        string time;
        string highestbid;
        string highestbidder;
    
   



};





class Userinfo : Item{
    private:    
        string userpwd;
        string userfullname;
        string userphonenum;
        string useremail;
        string useridtype;
        string userid;
        string usersellrate;
        string userbuyrate;
        string usercp;
    
    public:
        string username;



};


class Admin : Userinfo : Item {
    private: 
        string adname;
        string adpwd;

};


class Afterbid : Userinfo : Item{

};

#endif