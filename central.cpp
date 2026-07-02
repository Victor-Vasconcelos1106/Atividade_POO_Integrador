#include "central.hpp"
#include <utility>

void central::registrar(std::unique_ptr<alerta> a) {
    alertas_.push_back(std::move(a)); // Recebe por valor e move para o vetor
}

void central::exibir_todos() const {
    for (const auto& a : alertas_) {
        a->exibir(); // Despacho dinâmico via ponteiro da classe base
    }
}

int central::total() const noexcept {
    return static_cast<int>(alertas_.size());
}