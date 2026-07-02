#include "alertas_derivados.hpp"

// Alerta Crítico
alerta_critico::alerta_critico(const std::string& origem, const std::string& mensagem)
    : alerta(origem, 3), mensagem_(mensagem) {}

std::string alerta_critico::tipo() const { return "CRITICO"; }
std::string alerta_critico::formatar() const { return mensagem_; }

// Alerta Aviso
alerta_aviso::alerta_aviso(const std::string& origem, const std::string& mensagem)
    : alerta(origem, 2), mensagem_(mensagem) {}

std::string alerta_aviso::tipo() const { return "AVISO"; }
std::string alerta_aviso::formatar() const { return mensagem_; }

// Alerta Info
alerta_info::alerta_info(const std::string& origem, const std::string& mensagem)
    : alerta(origem, 1), mensagem_(mensagem) {}

std::string alerta_info::tipo() const { return "INFO"; }
std::string alerta_info::formatar() const { return mensagem_; }