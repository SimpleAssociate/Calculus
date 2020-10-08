
from matplotlib import pyplot as plt

def fx(x):
    return x*x*x

def main():

    function = []
    for i in range(-100, 100):
        y = fx(i)
        function.append(y)


    plt.plot(function)
    plt.show()

main()
