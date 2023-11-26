import numpy as np
from matplotlib import pyplot as plt


x = np.array([3.30,3.24,3.19,3.14,3.09,3.04,3.00,2.98,2.91,2.887,2.83,2.79,2.75])
y = np.array([1.276,1.279,1.298,1.287,1.285,1.263,1.250,1.253,1.232,1.205,1.160,1.130,1.081])



plt.title("Graph between resistivity and inverse of temperature")
plt.xlabel("Inverse of temperature")
plt.ylabel("Resistivity")
plt.plot(x,y)

plt.show()