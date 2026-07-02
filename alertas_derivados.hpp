#ifndef ALERTAS_DERIVADOS_HPP
#define ALERTAS_DERIVADOS_HPP

#include "alerta.hpp"
#include <string>

// 3. Alerta Crítico (Final)
class alerta_critico final : public alerta {
private:
    std::string mensagem_;
public:
    alerta_critico(const std::string& origem, const std::string& mensagem);
    std::string tipo() const override;
    std::string formatar() const override;
};

// 4. Alerta de Aviso
class alerta_aviso : public alerta {
private:
    std::string mensagem_;
public:
    alerta_aviso(const std::string& origem, const std::string& mensagem);
    std::string tipo() const override;
    std::string formatar() const override;
};

// 5. Alerta de Informação (Não é final)
class alerta_info : public alerta {
private:
    std::string mensagem_;
public:
    alerta_info(const std::string& origem, const std::string& mensagem);
    std::string tipo() const override;
    std::string formatar() const override;
};

#endif // ALERTAS_DERIVADOS_HPP