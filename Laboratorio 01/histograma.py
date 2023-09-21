import matplotlib.pyplot as plt

with open('Datos/dimension-5000.txt', 'r') as archivo:
    lineas = archivo.readlines()
    #Pasamos todos los numeros de las lineas a una lista
    puntos = [float(valor) for linea in lineas for valor in linea.split()]

rango_x = (0, max(puntos)) 

# Configurando el histograma
plt.hist(puntos, bins=200, edgecolor='black',color='#21A5A7', range=rango_x)
plt.xlabel('Valores')
plt.ylabel('Frecuencia')
plt.title('Histograma de Puntos - Dimensión 5000')
plt.grid(True)

# Mostrar el histograma
plt.show()
