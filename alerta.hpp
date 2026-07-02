#ifndef ALERTA_HPP
#define ALERTA_HPP

#include "formatavel.hpp"
#include <string>

class alerta : public formatavel {
private:
    std::string origem_;
    int severidade_;

public:
    alerta(const std::string& origem, int sev);
    virtual ~alerta() = default;

    // Template Method (Não-Virtual)
    void exibir() const;

    // Métodos virtuais puros
    virtual std::string tipo() const = 0;
    virtual std::string formatar() const override = 0;

    // Getters
    std::string origem() const;
    int severidade() const;
};

#endif // ALERTA_HPP