# CSC-305 - Lab 5

## Questions

1. What was the difference in run time for running in foreground or background?
  - In method 1, 4 background proccesses were executed, and in method 3, 3 foreground proccesses were executed. Method 1 had a total execution of 10 seconds, method 3 had a total execution of 45 seconds.
2. What is the difference between a foreground and a background process?
  - A background process can execute independently of other processes or interactions. It will not wait for other processes to finish before starting on its own and will not block the process queue. A foreground process however will wait until the process queue is free, and will block other foreground processes from starting until it finishes.
3. Why is there a run time difference between foreground and background process that is running the same program?
  - The foreground process will wait until the process queue is free, and if it is not free, this will delay its execution. Background processes will not wait and run independently resulting in a faster run time.