#pragma once

#include <d3d9.h>
#include <d3dx9.h>

#include "main.h"
#include "settings.h"

// Base class for effects
class Effect {
protected:
	IDirect3DDevice9* device;
    IDirect3DVertexDeclaration9 *vertexDeclaration;

    static const D3DVERTEXELEMENT9 vertexElements[3];

public:
	Effect(IDirect3DDevice9* device) : device(device) {
		device->CreateVertexDeclaration(vertexElements , &vertexDeclaration);
	}

	virtual ~Effect() {
		SAFERELEASE(vertexDeclaration);
	}

	void quad(int width, int height);
};
