import random
import numpy as np
#0.008496187379701899, 0.8241515399689018

class Perceptron:
    def __init__(self, alpha, epsilon):

        self._weights = []
        self.bias = random.random()
        self.alpha = alpha
        self.epsilon = epsilon

    def fit (self,X,y):
        self._weights = [random.random() for i in range(len(X[0]))]
        error = True
        epocas = 0 
        while error:
            error = False
            for xi, yi in zip(X, y):
                update = (yi - self.predict(xi))
                update = update*self.alpha
                self._weights[0:] += update*xi
                self.bias += update
                if error == False:
                    if (abs(update) >= self.epsilon):
                        error = True
            epocas += 1
            print ("epocas")
            print (epocas)
        return self

    def net_input(self, X):
        return np.dot(X, self._weights) + self.bias

    def predict(self, X):
        return np.where(self.net_input(X) >= 0.0, 1, 0)
if __name__ == "__main__":
    p = Perceptron(0.01, 0.001)
    X = np.array([[1,1],[1,0],[0,1],[0,0]])
    y = np.array([1,1,1,0]) 
    p.fit(X , y)
    for j in X:
        print (j)
        print(p.predict(j))