// Created on: 1997-07-28
// Created by: Pierre CHALAMET
// Copyright (c) 1997-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _Graphic3d_Texture1Dmanual_HeaderFile
#define _Graphic3d_Texture1Dmanual_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <Graphic3d_Texture1D.hxx>
#include <Graphic3d_NameOfTexture1D.hxx>
#include <Image_PixMap_Handle.hxx>
class TCollection_AsciiString;


class Graphic3d_Texture1Dmanual;
DEFINE_STANDARD_HANDLE(Graphic3d_Texture1Dmanual, Graphic3d_Texture1D)

//! This class provides the implementation of a manual 1D texture.
//! you MUST provides texture coordinates on your facets if you want to see your texture.
class Graphic3d_Texture1Dmanual : public Graphic3d_Texture1D
{

public:

  
  //! Creates a texture from the file FileName.
  Standard_EXPORT Graphic3d_Texture1Dmanual(const TCollection_AsciiString& theFileName);
  
  //! Create a texture from a predefined texture name set.
  Standard_EXPORT Graphic3d_Texture1Dmanual(const Graphic3d_NameOfTexture1D theNOT);
  
  //! Creates a texture from the pixmap.
  Standard_EXPORT Graphic3d_Texture1Dmanual(const Image_PixMap_Handle& thePixMap);




  DEFINE_STANDARD_RTTIEXT(Graphic3d_Texture1Dmanual,Graphic3d_Texture1D)

protected:




private:




};







#endif // _Graphic3d_Texture1Dmanual_HeaderFile
