
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();
    
    if (pid < 0) {
        perror("fork failed");
        return 1;
    } else if (pid == 0) {
        printf("this is the child process! with  PID: %d\n", getpid());
    } else {
        printf("this is the parent process! Child PID: %d\n", pid);
    }
    
    return 0;
}
