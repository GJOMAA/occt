// File generated by CPPExt (Transient)
//                     Copyright (C) 1991,1995 by
//  
//                      MATRA DATAVISION, FRANCE
//  
// This software is furnished in accordance with the terms and conditions
// of the contract and with the inclusion of the above copyright notice.
// This software or any other copy thereof may not be provided or otherwise
// be made available to any other person. No title to an ownership of the
// software is hereby transferred.
//  
// At the termination of the contract, the software and all copies of this
// software must be deleted.
//
#include <OCAFSample_Driver.jxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

OCAFSample_Driver::~OCAFSample_Driver() {}
 


Standard_EXPORT Handle_Standard_Type& OCAFSample_Driver_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(TFunction_Driver);
  if ( aType1.IsNull()) aType1 = STANDARD_TYPE(TFunction_Driver);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(MMgt_TShared);
  if ( aType2.IsNull()) aType2 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType3 = STANDARD_TYPE(Standard_Transient);
  if ( aType3.IsNull()) aType3 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,aType3,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("OCAFSample_Driver",
			                                 sizeof(OCAFSample_Driver),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(OCAFSample_Driver) Handle(OCAFSample_Driver)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(OCAFSample_Driver) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(OCAFSample_Driver))) {
       _anOtherObject = Handle(OCAFSample_Driver)((Handle(OCAFSample_Driver)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& OCAFSample_Driver::DynamicType() const 
{ 
  return STANDARD_TYPE(OCAFSample_Driver) ; 
}
Standard_Boolean OCAFSample_Driver::IsKind(const Handle(Standard_Type)& AType) const 
{ 
  return (STANDARD_TYPE(OCAFSample_Driver) == AType || TFunction_Driver::IsKind(AType)); 
}
Handle_OCAFSample_Driver::~Handle_OCAFSample_Driver() {}

