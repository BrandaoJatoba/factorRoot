import copy


def simplify_root(value):
    factor = 2
    simplified_radicand = copy.deepcopy(value)
    root = 1
    while factor <= simplified_radicand:
        if simplified_radicand % (factor*factor) == 0:
            simplified_radicand /= (factor * factor)
            root *= factor
        else:
            factor = factor + 1
    msg = "A raiz de " + str(value)
    if simplified_radicand != 1:
        msg = msg + " simplificada"
    msg = msg + " é " + str(root)
    if simplified_radicand != 1:
        msg = msg + " √" + str(int(simplified_radicand))
    print(msg)


teste = int(input("Insira radicando a ser simplificado:"))
simplify_root(teste)
