# EX NO 8 – FCFS and SJF Scheduling

## Aim
To study the concepts of FCFS and SJF scheduling.

## Domain / Use Case
Social media CPU scheduling (Instagram, Whatsapp, Youtube).

## Files
| File | Description |
|------|-------------|
| `ex8_partA_fcfs.c` | Part A – First Come First Serve |
| `ex8_partB_sjf.c` | Part B – Shortest Job First |
| `ex8_partA_output.png`, `ex8_partB_output.png` | Program outputs |

## Part A – FCFS
Applications run in arrival order with burst times 2, 4, 6. Waiting time of each = sum of earlier burst times; turnaround = waiting + burst.

```bash
gcc ex8_partA_fcfs.c -o fcfs
./fcfs
```
![FCFS output](ex8_partA_output.png)

## Part B – SJF
Burst times 5, 2, 4 are sorted so the shortest job runs first (non-preemptive); waiting time accumulates burst times.

```bash
gcc ex8_partB_sjf.c -o sjf
./sjf
```
![SJF output](ex8_partB_output.png)

## Definitions
- **FCFS** – non-preemptive; processes run in the order they arrive. Simple, but can cause long waits (convoy effect). *Example: a bank counter queue.*
- **SJF** – the process with the shortest CPU burst runs first. Lowers average waiting time but may starve long jobs. *Example: a printer handling small jobs first.*

## Result
Implemented the concepts of FCFS and SJF scheduling in C successfully.
