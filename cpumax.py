import multiprocessing
import math

def cpu_stress():
    while True:
        x = 123456789
        x = x * x
        x = x / math.pi

if __name__ == "__main__":
    processes = []

    for _ in range(multiprocessing.cpu_count()):
        p = multiprocessing.Process(target=cpu_stress)
        p.start()
        processes.append(p)

    for p in processes:
        p.join()