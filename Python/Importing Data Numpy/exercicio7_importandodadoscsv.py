import pandas as pd
import pylab as plt
import numpy as np


#Lendo os dados do arquivo .csv localizado na mesma pasta dessse arquivo .py
tabela = pd.read_csv("Queda_livre.csv", sep= ",", header = 0).to_numpy()

#definindo as variáveis t em ms e a em m/s2
t = tabela[:,0]/(1000)
a = tabela[:,1]

#plot dos pontos

plt.plot(t, a)
plt.xlabel("Tempo(s)")
plt.ylabel("Aceleração(m/s²)")
plt.grid(True)
plt.show()
