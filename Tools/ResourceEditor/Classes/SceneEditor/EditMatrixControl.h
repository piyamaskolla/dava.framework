/*
    Copyright (c) 2008, DAVA Consulting, LLC
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
    * Neither the name of the <organization> nor the
    names of its contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 
 
    * Created by Vitaliy Borodovsky
*/

#ifndef __DAVAENGINE_EDIT_MATRIX_CONTROL_H__
#define __DAVAENGINE_EDIT_MATRIX_CONTROL_H__

#include "Base/BaseTypes.h"
#include "UI/UIButton.h"
#include "UI/UITextField.h"

namespace DAVA 
{
class EditMatrixControl : public UIControl
{
public:
    EditMatrixControl(const Rect & _rect, bool _readOnly = false);
    ~EditMatrixControl();
    

    void SetMatrix(Matrix4 * _matrix);
    void OnEditButtonPressed(BaseObject * obj, void *, void *);
    void OnEditClosePressed(BaseObject * obj, void *, void *);

protected:
    Matrix4 * matrix;
    UITextField * textField;
    UIControl * textFieldBackground;
    UIButton * matrixButtons[4][4]; 
    bool readOnly;
};
};

#endif // __DAVAENGINE_EDIT_MATRIX_CONTROL_H__