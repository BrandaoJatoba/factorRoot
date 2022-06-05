def simplifyRoot(value):
    factor = 2
    simplifiedRadicand = value;
    root = 1
    while (factor <= simplifiedRadicand):
        if (simplifiedRadicand % (factor*factor) == 0):
            simplifiedRadicand /= (factor * factor)
            root *= factor;            
        else:
            factor = factor + 1
    print("Raiz: " + str(root))
    if (simplifiedRadicand!=1):
        print("Radicando: " + str(int(simplifiedRadicand)))


teste = int(input("Insira radicando a ser simplificado:"))
simplifyRoot(teste)