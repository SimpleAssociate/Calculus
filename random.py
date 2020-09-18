import random
import pandas as pd
import matplotlib.pyplot as plt
import math

points = []
straight = []
bigjump = 0
perc = 0

for i in range(10000):
    r = random.randint(0,100)
    points.append(r)

    try:
        if abs(points[-1] - points[-2]) > 25:
            bigjump += 1

        perc = bigjump/i*100

        straight.append(perc)

    except:
        pass





plt.plot(straight)
plt.show()
print("done")
