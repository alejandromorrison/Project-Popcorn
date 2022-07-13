/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/filters/http/rbac/v3/rbac.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_EXTENSIONS_FILTERS_HTTP_RBAC_V3_RBAC_PROTO_UPB_H_
#define ENVOY_EXTENSIONS_FILTERS_HTTP_RBAC_V3_RBAC_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_extensions_filters_http_rbac_v3_RBAC;
struct envoy_extensions_filters_http_rbac_v3_RBACPerRoute;
typedef struct envoy_extensions_filters_http_rbac_v3_RBAC envoy_extensions_filters_http_rbac_v3_RBAC;
typedef struct envoy_extensions_filters_http_rbac_v3_RBACPerRoute envoy_extensions_filters_http_rbac_v3_RBACPerRoute;
extern const upb_msglayout envoy_extensions_filters_http_rbac_v3_RBAC_msginit;
extern const upb_msglayout envoy_extensions_filters_http_rbac_v3_RBACPerRoute_msginit;
struct envoy_config_rbac_v3_RBAC;
extern const upb_msglayout envoy_config_rbac_v3_RBAC_msginit;


/* envoy.extensions.filters.http.rbac.v3.RBAC */

UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBAC *envoy_extensions_filters_http_rbac_v3_RBAC_new(upb_arena *arena) {
  return (envoy_extensions_filters_http_rbac_v3_RBAC *)_upb_msg_new(&envoy_extensions_filters_http_rbac_v3_RBAC_msginit, arena);
}
UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBAC *envoy_extensions_filters_http_rbac_v3_RBAC_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_filters_http_rbac_v3_RBAC *ret = envoy_extensions_filters_http_rbac_v3_RBAC_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_extensions_filters_http_rbac_v3_RBAC_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBAC *envoy_extensions_filters_http_rbac_v3_RBAC_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_extensions_filters_http_rbac_v3_RBAC *ret = envoy_extensions_filters_http_rbac_v3_RBAC_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_extensions_filters_http_rbac_v3_RBAC_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_extensions_filters_http_rbac_v3_RBAC_serialize(const envoy_extensions_filters_http_rbac_v3_RBAC *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_filters_http_rbac_v3_RBAC_msginit, arena, len);
}

UPB_INLINE bool envoy_extensions_filters_http_rbac_v3_RBAC_has_rules(const envoy_extensions_filters_http_rbac_v3_RBAC *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct envoy_config_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBAC_rules(const envoy_extensions_filters_http_rbac_v3_RBAC *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct envoy_config_rbac_v3_RBAC*); }
UPB_INLINE bool envoy_extensions_filters_http_rbac_v3_RBAC_has_shadow_rules(const envoy_extensions_filters_http_rbac_v3_RBAC *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const struct envoy_config_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBAC_shadow_rules(const envoy_extensions_filters_http_rbac_v3_RBAC *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const struct envoy_config_rbac_v3_RBAC*); }
UPB_INLINE upb_strview envoy_extensions_filters_http_rbac_v3_RBAC_shadow_rules_stat_prefix(const envoy_extensions_filters_http_rbac_v3_RBAC *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview); }

UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_set_rules(envoy_extensions_filters_http_rbac_v3_RBAC *msg, struct envoy_config_rbac_v3_RBAC* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct envoy_config_rbac_v3_RBAC*) = value;
}
UPB_INLINE struct envoy_config_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBAC_mutable_rules(envoy_extensions_filters_http_rbac_v3_RBAC *msg, upb_arena *arena) {
  struct envoy_config_rbac_v3_RBAC* sub = (struct envoy_config_rbac_v3_RBAC*)envoy_extensions_filters_http_rbac_v3_RBAC_rules(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_rbac_v3_RBAC*)_upb_msg_new(&envoy_config_rbac_v3_RBAC_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_http_rbac_v3_RBAC_set_rules(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_set_shadow_rules(envoy_extensions_filters_http_rbac_v3_RBAC *msg, struct envoy_config_rbac_v3_RBAC* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), struct envoy_config_rbac_v3_RBAC*) = value;
}
UPB_INLINE struct envoy_config_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBAC_mutable_shadow_rules(envoy_extensions_filters_http_rbac_v3_RBAC *msg, upb_arena *arena) {
  struct envoy_config_rbac_v3_RBAC* sub = (struct envoy_config_rbac_v3_RBAC*)envoy_extensions_filters_http_rbac_v3_RBAC_shadow_rules(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_rbac_v3_RBAC*)_upb_msg_new(&envoy_config_rbac_v3_RBAC_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_http_rbac_v3_RBAC_set_shadow_rules(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_set_shadow_rules_stat_prefix(envoy_extensions_filters_http_rbac_v3_RBAC *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview) = value;
}

/* envoy.extensions.filters.http.rbac.v3.RBACPerRoute */

UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBACPerRoute *envoy_extensions_filters_http_rbac_v3_RBACPerRoute_new(upb_arena *arena) {
  return (envoy_extensions_filters_http_rbac_v3_RBACPerRoute *)_upb_msg_new(&envoy_extensions_filters_http_rbac_v3_RBACPerRoute_msginit, arena);
}
UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBACPerRoute *envoy_extensions_filters_http_rbac_v3_RBACPerRoute_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_filters_http_rbac_v3_RBACPerRoute *ret = envoy_extensions_filters_http_rbac_v3_RBACPerRoute_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_extensions_filters_http_rbac_v3_RBACPerRoute_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBACPerRoute *envoy_extensions_filters_http_rbac_v3_RBACPerRoute_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_extensions_filters_http_rbac_v3_RBACPerRoute *ret = envoy_extensions_filters_http_rbac_v3_RBACPerRoute_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_extensions_filters_http_rbac_v3_RBACPerRoute_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_extensions_filters_http_rbac_v3_RBACPerRoute_serialize(const envoy_extensions_filters_http_rbac_v3_RBACPerRoute *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_filters_http_rbac_v3_RBACPerRoute_msginit, arena, len);
}

UPB_INLINE bool envoy_extensions_filters_http_rbac_v3_RBACPerRoute_has_rbac(const envoy_extensions_filters_http_rbac_v3_RBACPerRoute *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const envoy_extensions_filters_http_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBACPerRoute_rbac(const envoy_extensions_filters_http_rbac_v3_RBACPerRoute *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const envoy_extensions_filters_http_rbac_v3_RBAC*); }

UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBACPerRoute_set_rbac(envoy_extensions_filters_http_rbac_v3_RBACPerRoute *msg, envoy_extensions_filters_http_rbac_v3_RBAC* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), envoy_extensions_filters_http_rbac_v3_RBAC*) = value;
}
UPB_INLINE struct envoy_extensions_filters_http_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBACPerRoute_mutable_rbac(envoy_extensions_filters_http_rbac_v3_RBACPerRoute *msg, upb_arena *arena) {
  struct envoy_extensions_filters_http_rbac_v3_RBAC* sub = (struct envoy_extensions_filters_http_rbac_v3_RBAC*)envoy_extensions_filters_http_rbac_v3_RBACPerRoute_rbac(msg);
  if (sub == NULL) {
    sub = (struct envoy_extensions_filters_http_rbac_v3_RBAC*)_upb_msg_new(&envoy_extensions_filters_http_rbac_v3_RBAC_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_http_rbac_v3_RBACPerRoute_set_rbac(msg, sub);
  }
  return sub;
}

extern const upb_msglayout_file envoy_extensions_filters_http_rbac_v3_rbac_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_EXTENSIONS_FILTERS_HTTP_RBAC_V3_RBAC_PROTO_UPB_H_ */