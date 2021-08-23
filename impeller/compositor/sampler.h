// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include <Metal/Metal.h>

#include "flutter/fml/macros.h"

namespace impeller {

class SamplerLibrary;

class Sampler {
 public:
  bool IsValid() const;

  ~Sampler();

  id<MTLSamplerState> GetMTLSamplerState() const;

 private:
  friend SamplerLibrary;

  id<MTLSamplerState> state_ = nullptr;

  Sampler(id<MTLSamplerState> state);

  FML_DISALLOW_COPY_AND_ASSIGN(Sampler);
};

}  // namespace impeller