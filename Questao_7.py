class Empresa:
    def __init__(self, nome):
        self.nome = nome
        self.departamentos = []

    def adicionar_departamento(self, departamento):
        self.departamentos.append(departamento)

    def listar_departamentos(self):
        print(f"Departamentos da empresa {self.nome}:")
        for departamento in self.departamentos:
            print("-", departamento)


class DepartamentoFinanceiro:
    def __init__(self, nome):
        self.nome = nome

    def __str__(self):
        return f"Departamento Financeiro: {self.nome}"


class DepartamentoRH:
    def __init__(self, nome):
        self.nome = nome

    def __str__(self):
        return f"Departamento de Recursos Humanos: {self.nome}"


class DepartamentoTI:
    def __init__(self, nome):
        self.nome = nome

    def __str__(self):
        return f"Departamento de Tecnologia da Informação: {self.nome}"


class DepartamentoVendas:
    def __init__(self, nome):
        self.nome = nome

    def __str__(self):
        return f"Departamento de Vendas: {self.nome}"


# Exemplo de utilização
if __name__ == "__main__":
    minha_empresa = Empresa("Minha Empresa")

    financeiro = DepartamentoFinanceiro("Financeiro")
    rh = DepartamentoRH("RH")
    ti = DepartamentoTI("TI")
    vendas = DepartamentoVendas("Vendas")

    minha_empresa.adicionar_departamento(financeiro)
    minha_empresa.adicionar_departamento(rh)
    minha_empresa.adicionar_departamento(ti)
    minha_empresa.adicionar_departamento(vendas)

    minha_empresa.listar_departamentos()
