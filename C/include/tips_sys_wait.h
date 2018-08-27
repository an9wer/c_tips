#ifndef TIPS_SYS_WAIT_H
#define TIPS_SYS_WAIT_H

void tips_wait_exit(void);
void tips_wait_signal(void);

void tips_waitpid(void);
void tips_waitpid_WNOHANG(void);

#endif
