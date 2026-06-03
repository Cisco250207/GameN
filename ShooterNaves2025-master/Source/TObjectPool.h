#pragma once

#include "CoreMinimal.h"

template<typename T>
class TObjectPool
{
public:
	TObjectPool()
	{
	}

	void Inicializar(UWorld* World, int32 CantidadInicial, FVector PosicionInicial = FVector(0.f, 0.f, -5000.f))
	{
		if (!World)
		{
			return;
		}

		for (int32 i = 0; i < CantidadInicial; i++)
		{
			T* Objeto = World->SpawnActor<T>(
				T::StaticClass(),
				PosicionInicial,
				FRotator::ZeroRotator
			);

			if (Objeto)
			{
				Objetos.Add(Objeto);
			}
		}
	}

	T* ObtenerDisponible(UWorld* World)
	{
		for (int32 i = Objetos.Num() - 1; i >= 0; i--)
		{
			T* Objeto = Objetos[i];

			if (!IsValid(Objeto))
			{
				Objetos.RemoveAt(i);
				continue;
			}

			if (!Objeto->EstaActivo())
			{
				return Objeto;
			}
		}

		if (!World)
		{
			return nullptr;
		}

		T* NuevoObjeto = World->SpawnActor<T>(
			T::StaticClass(),
			FVector(0.f, 0.f, -5000.f),
			FRotator::ZeroRotator
		);

		if (NuevoObjeto)
		{
			Objetos.Add(NuevoObjeto);
		}

		return NuevoObjeto;
	}

	int32 ObtenerCantidad() const
	{
		return Objetos.Num();
	}

private:
	TArray<T*> Objetos;
};