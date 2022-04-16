/* 
 * File:   para.h
 * Author: lk
 *
 * Created on 15 April, 2022, 11:37 PM
 */

#ifndef PARA_H
#define  PARA_H

#ifdef  __cplusplus
extern "C" {
#endif

/* The mail ids used here are fake fill in with the correct mail ids.*/

#define FROM "<xyz@gmail.com>" // pass it to smtp from
#define TO "<abc@gmail.com>" // pass it to smtp from
#define MAIL_HEADER_FROM "lk<xyz@gmail.com>" // pass it to header  
#define MAIL_HEADER_TO "Mini<abc@gmail.com>"   // pass it to header
#define UID "(full gmail id)"
#define PWD "(gmail password)"
#define smtp_server_url "smtp.gmail.com"
#define domain_name "localhost"

#ifdef  __cplusplus
}
#endif

#endif  /* PARA_H */

