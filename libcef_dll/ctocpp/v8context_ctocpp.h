// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_V8CONTEXT_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_V8CONTEXT_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include "include/cef_v8.h"
#include "include/capi/cef_v8_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefV8ContextCToCpp
    : public CefCToCpp<CefV8ContextCToCpp, CefV8Context, cef_v8context_t> {
 public:
  explicit CefV8ContextCToCpp(cef_v8context_t* str)
      : CefCToCpp<CefV8ContextCToCpp, CefV8Context, cef_v8context_t>(str) {}
  virtual ~CefV8ContextCToCpp() {}

  // CefV8Context methods
  virtual CefRefPtr<CefTaskRunner> GetTaskRunner() OVERRIDE;
  virtual bool IsValid() OVERRIDE;
  virtual CefRefPtr<CefBrowser> GetBrowser() OVERRIDE;
  virtual CefRefPtr<CefFrame> GetFrame() OVERRIDE;
  virtual CefRefPtr<CefV8Value> GetGlobal() OVERRIDE;
  virtual bool Enter() OVERRIDE;
  virtual bool Exit() OVERRIDE;
  virtual bool IsSame(CefRefPtr<CefV8Context> that) OVERRIDE;
  virtual bool Eval(const CefString& code, CefRefPtr<CefV8Value>& retval,
      CefRefPtr<CefV8Exception>& exception) OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_V8CONTEXT_CTOCPP_H_

