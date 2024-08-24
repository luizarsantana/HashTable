// SPDX-License-Identifier: UNLICENSED 

pragma solidity ^0.8.0; // versão do compilador 

// declara o contrato 
contract Anac { 
    uint idade; // variável de estado que armazena idade 

    address private owner; // variável de estado que armazena o endereço do dono do contrato

    // inicializador do contrato
    constructor () { 
        idade = 18; // define 18 anos como uma instância padrão do contrato
        owner = msg.sender; // define o endereço de criador como dono do contrato
    }

    // função para definir idade (pública)
    function setIdade(uint novaIdade) public {
        idade = novaIdade; // atualiza o valor da idade
    }

    // função para vizualizar idade (pública)
    function getIdade() public view returns (uint) {
        return idade; // retorna o valor da idade 
    }

    // restringe o acesso apenas ao dono do contrato
    modifier onlyOwner(){
        require(msg.sender == owner, "Apenas o dono do contrato pode executar"); // verifica se é o dono
        _; // marcação onde a função original deve ser inserida
    }
}

