# Regras de Negócio e DMN

### As Regras de Negócio desenvolvidas para essa atividade foram:

- Uma compra só pode ser efetivada sem a necessidade de aprovação pelo setor financeiro se estiver dentro do orçamento previamente estabelecido para o setor de compras.
- Toda compra que exceder o orçamento predefinido deve ser enviada para aprovação do setor financeiro. Somente após essa aprovação, a compra pode ser efetivada.
- Se uma solicitação de compra for rejeitada pelo setor financeiro, o setor de Compras deve reavaliar as cotações com os fornecedores e tentar otimizar os custos ou buscar novas opções.
- O setor de Compras deve realizar cotações com fornecedores e apresentar um comparativo detalhado antes de consultar o setor financeiro para aprovação final
- Sempre que um pedido de compra for solicitado pelo setor de Vendas, ele deve ser revisado e aprovado pelo setor de Estoque para verificar a disponibilidade dos itens.

### E com base nelas, o seguinte DMN foi estruturado:

<img src="DMN.png">

Arquivo `Ponderada.dmn` referente à [imagem acima](https://github.com/2023M7T4-Inteli/grupo3/blob/main/documents/outros/Entendimento_Neg%C3%B3cio.md) para vizualização das tabelas de decisão, inputs e outputs.
