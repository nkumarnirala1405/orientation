/** @file         iota14.cpp
 *  @brief        To find the tray number of given 
 *                customer Id and cookie type
 *  
 *  @author       Shakti Prakash(IOTA14)
 *  @bug          No known bugs.
 */ 

/*
 *#####################################################################
 *  Initialization block
 *  ---------------------
 *#####################################################################
 */

/* --- Standard Includes --- */
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

/**
 *@macro code given to corresponding cookie type
 */
#define CHOCO_BANANA     	0  
#define VANILLA			1
#define DARK_CHOCO		2
#define TROPICAL 		3

using namespace std;

/* Data structure representing a cookie */
struct cookie {
        
        /* Customer ID's*/
        int16_t customerId;

        /* Cookie Type */
        int8_t cookieType;
};

/* Data Structure representing a Tray */
struct tray {

        /* Each tray can contain at max 6 cookies */
        struct cookie cookies[6];
};

/* Total 64 trays */
struct tray trays[64];

/*
 *#####################################################################
 *  Process block
 *  ---------------------
 *#####################################################################
 */

int main()
{
    string sof;			/* sof="Start of file" */
    string tray_num;		/* tray_num=tray number */
    string cus_id;		/* cus_id=customer Id */
    string cookie_type;		/* cookie_type=cookie type */
    vector<pair<int,pair<int,int> > > info;   /* for storing information of each cookie separately */

    cin >> sof;
    
    /* Operates till tray_num equals EOF */
    while(true){
        cin >> tray_num;
        if("EOF" == tray_num)
            break;
        cin >> cus_id;
        cin >> cookie_type;
	
        /** stoi converts string to integer
       	 *  pushing each cookies information one by one
	 */
        info.push_back({stoi(tray_num),{stoi(cus_id),stoi(cookie_type)}});
	
        }			  /* end forever*/
	
    /** req_tray_num will give the tray number for
     *  the given customer ID and cookie type
     */                               
    int req_tray_num=0;           /* required tray number for the given cus_id and cookie type */
    int len = info.size();	  /* total number of tray */
    int i=0;    		  /* for running loop */
    
    int given_cus_id;		  /* given customer id */
    int given_cookie_type;        /* given cookie type */
    cin >> given_cus_id >> given_cookie_type;
    
    /* loop to check for given_cus_id and given_cookie_type in vector info */
    for( ; i<len; i++){
        if(info[i].second.first == given_cus_id && info[i].second.second == given_cookie_type){
	     req_tray_num = info[i].first;
	     break;
	}    
    }				   /* if found ans=tray no. of d and t pair*/
    
    if(i < len){             
         cout << req_tray_num;
    }				   /* if found the d and t pair return ans */
    
    else{                     
         cout << "EINVAL";
    }				   /* else return "EINVAL"*/

    return 0;
}