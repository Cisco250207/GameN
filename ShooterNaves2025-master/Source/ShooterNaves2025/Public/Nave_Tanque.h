#pragma once

#include "CoreMinimal.h"
#include "Nave_Padre.h"

#include "Nave_Tanque.generated.h"


UCLASS()
class SHOOTERNAVES2025_API ANave_Tanque : public ANave_Padre
{
    GENERATED_BODY()

public:
    ANave_Tanque();

protected:
    virtual void ConfigurarPatronesAtaque() override;
    virtual void EjecutarPatronAtaque(EPatronAtaqueEnemigo Patron) override;
};