// Copyright 2016 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

__BEGIN_CDECLS

// forward declarations needed by syscalls.h
typedef struct zx_port_packet zx_port_packet_t;
typedef struct zx_pci_bar zx_pci_resource_t;
typedef struct zx_pcie_device_info zx_pcie_device_info_t;
typedef struct zx_pci_init_arg zx_pci_init_arg_t;
typedef union zx_rrec zx_rrec_t;
typedef struct zx_vcpu_create_args zx_vcpu_create_args_t;

__END_CDECLS
