import numpy as np
import matplotlib.pyplot as plt

unif_file = open("unif.txt", "r")
unif_array = unif_file.read().split(',')

unif_array = np.array(unif_array)
unif_array = unif_array.astype(np.float)

#norm_file = open("normal.txt", "r")
#norm_array = unif_file.read().split()
#norm_array = np.array(norm_array)
#norm_array = norm_array.astype(np.float)

unif_file.close()
#norm_file.close()

plt.hist(unif_array, normed=True, bins=100)
plt.show()
#plt.hist(norm_array, normed=True, bins=10)
