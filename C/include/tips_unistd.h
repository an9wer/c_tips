#ifndef TIPS_UNISTD_H
#define TIPS_UNISTD_H

void tips_getuid(void);
void tips_getgid(void);
void tips_geteuid(void);
void tips_getegid(void);
void tips_setuid(void);
void tips_setgid(void);
void tips_seteuid(void);
void tips_setegid(void);
void tips_setreuid(void);
void tips_setregid(void);

void tips_fork_zombie(void);
void tips_fork_orphan(void);

void tips_execvp(void);
void tips_execl(void);

void tips_nice(void);

#endif /* TIPS_UNISTD_H */
