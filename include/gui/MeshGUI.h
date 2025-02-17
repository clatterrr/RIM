﻿#pragma once

#include "common.h"
#include <gui/BaseGUI.h>
#include <helpers/MeshData.h>

class MeshGUI : public BaseGUI
{
public:
	MeshGUI(MeshData* mesh = nullptr);
	void setMesh(MeshData* mesh);
	virtual ~MeshGUI();
	virtual void draw(GLFWwindow* window, int order = 0);
private:
	MeshData* meshptr;
};

