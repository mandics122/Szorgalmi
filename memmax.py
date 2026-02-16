import time

data = []

try:
    while True:
        data.append(bytearray(10 * 1024 * 1024))
        print(f"Foglalt memória: {len(data)}")
        time.sleep(0.1)

except MemoryError:
    print("Elfogyott a memória!")