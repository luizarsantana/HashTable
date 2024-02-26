# HashTable - Atividade

## Casos de Teste 
#### Abaixo serão listado 5 Casos de Teste para a Tabela Hash desenvolvida.

<p align="center">
<br>
Figura 01 - Tabela Original <br>
<img src="assets/tabela_original.png" style="display: block; margin: auto;"></img>
Fonte: Elaborado pela autora.
</p>

&emsp; A figura 01 se trata ta primeira versão da tabela hash de produtos, nela todos os itens listados possuem o último digito do "Id" diferentes, o que não resultou em nenhuma colisão.

<p align="center">
<br>
Figura 02 - Tabela com colisão <br>
<img src="assets/tabela_colisão.png" style="display: block; margin: auto;"></img>
Fonte: Elaborado pela autora.
</p>

&emsp;A figura 02 representa o 1° caso de teste, no qual o "Id" do produto "garrafa" foi alterado, resultando em uma colisão com o produto "sulfite", porém como esse está posicionado anteriormente na lista de produtos, a garrafa foi realocada para a posição livre mais próxima, a "9".

<p align="center">
<br>
Figura 03 - Tabela com Localização de Produto Existente <br>
<img src="assets/localizar_existente.png" style="display: block; margin: auto;"></img>
Fonte: Elaborado pela autora.
</p>

&emsp; Na figura 03, caso de teste 2, foi insirido o "Id" da "garrafa" para localizá-la na tabela, logo o índice numérico (1) representa que um produto correspondente foi encontrado, sendo esse indicado como a garrafa.

<p align="center">
<br>
Figura 04 - Tabela com Localização de Produto Inexistente por id <br>
<img src="assets/localizar_inexistente1.png" style="display: block; margin: auto;"></img>
Fonte: Elaborado pela autora.
<br>
Figura 05 - Tabela com Localização de Produto Inexistente com nome <br>
<img src="assets/localizar_inexistente2.png" style="display: block; margin: auto;"></img>
Fonte: Elaborado pela autora.
</p>

&emsp; Nas figuras 4 e 5, 3° caso de teste, há a tentativa de localizar um produto que não existe na tabela, primeiramente por "Id", e depois com o nome do produto. Como o esperado, o índice retornado é 0 (com e sem o nome do produto, dependendo da tentativa de localização), indicando que não há nenhum produto correspondente na tabela hash.

<p align="center">
<br>
Figura 06 - Tabela com Remoção de Produto Existente <br>
<img src="assets/deletar_existente.png" style="display: block; margin: auto;"></img>
Fonte: Elaborado pela autora.
</p>

&emsp; Para o caso de teste 4, a figura 6 ilustra a tabela hash deletando a garrafa, logo após a localização do produto existente nela, descrito no caso de teste 2.

<p align="center">
<br>
Figura 07 - Tabela com Remoção de Produto Inexistente por id <br>
<img src="assets/deletar_inexistente1.png" style="display: block; margin: auto;"></img>
Fonte: Elaborado pela autora.
<br>
Figura 08 - Tabela com Remoção de Produto Inexistente com nome <br>
<img src="assets/deletar_inexistente2.png" style="display: block; margin: auto;"></img>
Fonte: Elaborado pela autora.
</p>

&emsp; Por fim, o caso de teste 5 é ilustrado por duas figuras, assim como o 3, que mostram a tentativa de deletar um produto inexistente na tabela, sendo primeiro apenas pelo seu "Id", e depois pelo nome do produto. Ambas as tentativas obtêm o mesmo resultado, o produto não é encontrado na tabela (uma vez que nunca existiu nela), logo não há nada a ser deletado, retornanto a mesma tabela do início.

_PS.: Não foi utilizado a técnica do númerro primo na elaboração da tabela hash nessa atividade._
_PS2.: Os códigos desenvolvidos foram baseados no autoestudo indicado._
