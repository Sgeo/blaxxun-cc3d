/*=============================================================================

This code is licensed under the Web3D-blaxxun Community Source License,
provided in distribution file LICENSE.TXT and available online at
http://www.web3D.org/TaskGroups/x3d/blaxxun/Web3D-blaxxunCommunitySourceAgreement.html
and may only be used for non-commercial use as specified in that license.

THE WEB3D CONSORTIUM AND BLAXXUN DO NOT MAKE AND HEREBY DISCLAIM ANY EXPRESS
OR IMPLIED WARRANTIES RELATING TO THIS CODE, INCLUDING BUT NOT LIMITED TO,
WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR
PURPOSE, OR ANY WARRANTIES THAT MIGHT ARISE FROM A COURSE OF DEALING, USAGE
OR TRADE PRACTICE.  THE COMMUNITY SOURCE CODE IS PROVIDED UNDER THIS
AGREEMENT "AS IS," WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED,
INCLUDING, WITHOUT LIMITATION, WARRANTIES THAT THE COMMUNITY SOURCE CODE ARE
FREE OF DEFECTS, MERCHANTABLE, FIT FOR A PARTICULAR PURPOSE OR
NON-INFRINGING OR IN ANY WAY CONSTITUTE THE COMPLETE PRODUCT MARKETED UNDER
THE NAMES GIVEN SAID CODE.

==============================================================================*/
#ifndef  _GV_TEXTURE_ROTOR_
#define  _GV_TEXTURE_ROTOR_

#ifdef _G_VRML1

// HG 

#include <gvsfrotation.h>
#include <gvsffloat.h>
#include <gvsfbool.h>
#include <gvrotation.h>
#include <gvsubnode.h>

class GvTextureRotor : public GvRotation {

    GV_NODE_HEADER(GvTextureRotor);

  public:
    // Fields from GvRotation
    //GvSFRotation	rotation;	// Rotation
	GvSFFloat speed;
	GvSFBool  on;
	GvSFFloat offset;

	void Get(Matrix &m,float t) {
	       m = RotationAxisMatrix(Point(rotation.value.axis[0],rotation.value.axis[1],rotation.value.axis[2]), 
	       offset + rotation.value.angle*speed*t);
	}

	// multiply matrix with top matrix in current state
	int Do(GTraversal &state);   
};

#endif _G_VRML1

#endif /* _GV_TEXTURE_ROTOR_ */