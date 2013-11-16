/////////////////////////////////////////////////////////////////////////////
// Name:        NewtonMeshEffectExport.h
// Purpose:     
// Author:      Julio Jerez
// Modified by: 
// Created:     22/05/2010 07:45:05
// RCS-ID:      
// Copyright:   Copyright (c) <2010> <Newton Game Dynamics>
// License:     
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
// 
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely
/////////////////////////////////////////////////////////////////////////////

#ifndef _D_FBX_IMPORT_H_
#define _D_FBX_IMPORT_H_


class fbxImport: public dImportPlugin
{
	public:
	static dImportPlugin* GetPlugin();

	public:
	fbxImport():dImportPlugin() {}
	~fbxImport() {}

	virtual const char* GetMenuName () { return GetSignature();}
	virtual const char* GetFileExtension () { return "*.fbx";}
	virtual const char* GetFileDescription () {return "Import autodesk fbx file";}

	virtual const char* GetSignature () {return "fbx mesh import";}
	virtual bool Import (const char* const fileName, dPluginInterface* const interface);
};

#endif