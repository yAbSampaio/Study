import random

class Perceptron:
    def __init__(self, alpha, epsilon):

        self._weights = []
        self.bias = random.random()
        self.alpha = alpha
        self.epsilon = epsilon
    
    @property
    def weights(self):
        return self._weights
    
    @weights.setter
    def weights(self, value):
        raise Exception("Nao pode alterar os pesos fdp")

    def predict(self, x):
        res = self.bias
        for xi,wi in zip(x,self.weights):    
            res += xi*wi
        return 1 if res >= 0 else 0
        

    def fit(self, X, y):
        self._weights = [random.random() for i in range(len(X[0]))]
        error = True
        self.epochs = 0
        while error:
            error = False
            for xi, yi in zip(X, y):
                update = (yi - self.predict(xi))
                update = update*self.alpha
                for id, w in enumerate(self.weights):
                    print(self.weights[id])
                    print(xi[id])
                    self.weights[id] -= xi[id]*update
                    print(self.weights[id])
                    print("\n")
                self.bias = update
                if error != True:
                    if (abs(update) >= self.epsilon):
                        error = True
            self.epochs += 1 
        #return self

if __name__ == "__main__":
    p = Perceptron(0.01, epsilon=0.001)
    X = [[1,1],[1,0],[0,1],[0,0]]
    y  = [1,0,0,0]
    p.fit(X , y)
    for j in X:
        print(p.predict(j))