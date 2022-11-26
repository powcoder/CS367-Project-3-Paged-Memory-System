https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdio.h>
#include <stdlib.h>
#include "memory_system.h"
/* Feel free to implement additional header files as needed */

void
initialize() {
/* if there is any initialization you would like to have, do it here */
/*  This is called for you in the main program */
}

/* You will implement the two functions below:
 *     * you may add as many additional functions as you like
 *     * you may add header files for your data structures
 *     * you MUST call the relevant log_entry() functions (described below)
 *          or you will not receive credit for all of your hard work!
 */

int
get_physical_address(int virt_address) {
/*
   Convert the incoming virtual address to a physical address. 
     * if virt_address too large, 
          log_entry(ILLEGALVIRTUAL,virt_address); 
          return -1
     * if PPN is in the TLB, 
	  compute PA 
          log_entry(ADDRESS_FROM_TLB,PA);
          return PA
     * else use the page table function to get the PPN:
          * if VPN is in the Page Table
	          compute PA 
                  add the VPN and PPN in the TLB
	          log_entry(ADDRESS_FROM_PAGETABLE,PA);
	          return PA
	  * else load the frame into the page table
	          PPN = load_frame(VPN) // use this provided library function
                  add the VPN and PPN in to the page table
                  add the VPN and PPN in to the TLB
 		  compute PA
		  log_entry(ADDRESS_FROM_PAGE_FAULT_HANDLER,PA);
 		  return PA
*/
    int PA;

    return PA;
}



char
get_byte(int phys_address) {
/*
   Use the incoming physical address to find the relevant byte. 
     * if data is in the cache, use the offset (last 2 bits of address)
          to compute the byte to be returned data
          log_entry(DATA_FROM_CACHE,byte);
          return byte 
     * else use the function get_long_word(phys_address) to get the 
          4 bytes of data where the relevant byte will be at the
          given offset (last 2 bits of address)
          log_entry(DATA_FROM_MEMORY,byte);
          return byte

NOTE: if the incoming physical address is too large, there is an
error in the way you are computing it...
*/
   char byte;

   return byte;
}

