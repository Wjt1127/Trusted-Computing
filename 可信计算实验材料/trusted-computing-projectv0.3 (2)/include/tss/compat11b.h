
#ifndef __COMPAT11B_H__
#define __COMPAT11B_H__

#include <tss/tpm.h>

#define TCPA_Vendor_Specific32  TPM_Vendor_Specific32
#define TCPA_Vendor_Specific8   TPM_Vendor_Specific8

typedef TSS_UNICODE             UNICODE;
typedef TPM_DIGEST              TCPA_DIGEST;
typedef TPM_NONCE               TCPA_NONCE;
typedef TPM_NONCE               TCPA_SALT_NONCE;
typedef TPM_PUBKEY              TCPA_PUBKEY;
typedef TPM_SECRET              TCPA_SECRET;
typedef TPM_KEY                 TCPA_KEY;
typedef TPM_DIRVALUE            TCPA_DIRVALUE;
typedef TPM_COMMAND_CODE        TCPA_COMMAND_CODE;
typedef TPM_BOUND_DATA          TCPA_BOUND_DATA;
typedef TPM_STRUCT_VER          TCPA_VERSION;
typedef TPM_RESULT              TCPA_RESULT;
typedef TPM_PAYLOAD_TYPE        TCPA_PAYLOAD_TYPE;
typedef TPM_STORE_PRIVKEY       TCPA_STORE_PRIVKEY;
typedef TPM_CHOSENID_HASH       TCPA_CHOSENID_HASH;
typedef TPM_SYMMETRIC_KEY       TCPA_SYMMETRIC_KEY;
typedef TPM_PCR_INFO            TCPA_PCR_INFO;
typedef TPM_PCR_SELECTION       TCPA_PCR_SELECTION;
typedef TPM_STORED_DATA         TCPA_STORED_DATA;
typedef TPM_SEALED_DATA         TCPA_SEALED_DATA;
typedef TPM_KEY_FLAGS           TCPA_KEY_FLAGS;
typedef TPM_KEY_PARMS           TCPA_KEY_PARMS;
typedef TPM_STORE_PUBKEY        TCPA_STORE_PUBKEY;
typedef TPM_MIGRATIONKEYAUTH    TCPA_MIGRATIONKEYAUTH;
typedef TPM_RSA_KEY_PARMS       TCPA_RSA_KEY_PARMS;
typedef TPM_CERTIFY_INFO        TCPA_CERTIFY_INFO;
typedef TPM_STORE_ASYMKEY       TCPA_STORE_ASYMKEY;
typedef TPM_ENCAUTH             TCPA_ENCAUTH;
typedef TPM_PCRINDEX            TCPA_PCRINDEX;
typedef TPM_PCRVALUE            TCPA_PCRVALUE;
typedef TPM_DIRINDEX            TCPA_DIRINDEX;
typedef TPM_PROTOCOL_ID         TCPA_PROTOCOL_ID;
typedef TPM_ALGORITHM_ID        TCPA_ALGORITHM_ID;
typedef TPM_ENTITY_TYPE         TCPA_ENTITY_TYPE;
typedef TPM_CAPABILITY_AREA     TCPA_CAPABILITY_AREA;
typedef TPM_HMAC                TCPA_HMAC;
typedef TPM_MIGRATE_SCHEME      TCPA_MIGRATE_SCHEME;
typedef TPM_PHYSICAL_PRESENCE   TCPA_PHYSICAL_PRESENCE;
typedef TPM_KEY_HANDLE          TCPA_KEY_HANDLE;
typedef TPM_KEY_HANDLE_LIST     TCPA_KEY_HANDLE_LIST;
typedef TPM_PCR_COMPOSITE       TCPA_PCR_COMPOSITE;
typedef TPM_AUTH_DATA_USAGE     TCPA_AUTH_DATA_USAGE;
typedef TPM_AUTHDATA            TCPA_AUTHDATA;
typedef TPM_KEY_USAGE           TCPA_KEY_USAGE;
typedef TPM_COMPOSITE_HASH      TCPA_COMPOSITE_HASH;
typedef TPM_QUOTE_INFO          TCPA_QUOTE_INFO;
typedef TPM_TAG                 TCPA_TAG;
typedef TPM_ENC_SCHEME          TCPA_ENC_SCHEME;
typedef TPM_SIG_SCHEME          TCPA_SIG_SCHEME;
typedef TPM_STARTUP_TYPE        TCPA_STARTUP_TYPE;
typedef TPM_AUTHHANDLE          TCPA_AUTHHANDLE;
typedef TPM_SYM_CA_ATTESTATION  TCPA_SYM_CA_ATTESTATION;
typedef TPM_ASYM_CA_CONTENTS    TCPA_ASYM_CA_CONTENTS;
typedef TPM_IDENTITY_REQ        TCPA_IDENTITY_REQ;
typedef TPM_IDENTITY_PROOF      TCPA_IDENTITY_PROOF;

// These were removed from the 1.2 TPM spec
typedef UINT32                  TCPA_ENCHANDLE;
typedef UINT32                  TCPA_EVENTTYPE;
typedef struct tdTCPA_AUDIT_EVENT {
    TCPA_COMMAND_CODE ordinal;
    TCPA_RESULT       returncode;
} TCPA_AUDIT_EVENT;

#define TCPA_SHA1_160_HASH_LEN          TPM_SHA1_160_HASH_LEN
#define TCPA_SHA1BASED_NONCE_LEN        TPM_SHA1BASED_NONCE_LEN

#define redirection             TSS_KEYFLAG_REDIRECTION
#define migratable              TSS_KEYFLAG_MIGRATABLE
#define volatileKey             TSS_KEYFLAG_VOLATILEKEY

#define TCPA_ET_KEYHANDLE       TPM_ET_KEYHANDLE
#define TCPA_ET_KEY             TPM_ET_KEY
#define TCPA_ET_OWNER           TPM_ET_OWNER
#define TCPA_ET_SRK             TPM_ET_SRK
#define TCPA_ET_DATA            TPM_ET_DATA

#define TCPA_PID_OIAP           TPM_PID_OIAP
#define TCPA_PID_OSAP           TPM_PID_OSAP
#define TCPA_PID_ADIP           TPM_PID_ADIP
#define TCPA_PID_ADCP           TPM_PID_ADCP
#define TCPA_PID_OWNER          TPM_PID_OWNER

#define TCPA_PT_ASYM            TPM_PT_ASYM
#define TCPA_PT_BIND            TPM_PT_BIND
#define TCPA_PT_MIGRATE         TPM_PT_MIGRATE
#define TCPA_PT_MAINT           TPM_PT_MAINT
#define TCPA_PT_SEAL            TPM_PT_SEAL

#define TCPA_CAP_ALG            TPM_CAP_ALG
#define TCPA_CAP_ORD            TPM_CAP_ORD
#define TCPA_CAP_PID            TPM_CAP_PID
#define TCPA_CAP_FLAG           TPM_CAP_FLAG
#define TCPA_CAP_VERSION        TPM_CAP_VERSION
#define TCPA_CAP_PROPERTY       TPM_CAP_PROPERTY
#define TCPA_CAP_KEY_HANDLE     TPM_CAP_KEY_HANDLE
#define TCPA_CAP_CHECK_LOADED   TPM_CAP_CHECK_LOADED

#define TCPA_ALG_RSA            TPM_ALG_RSA
#define TCPA_ALG_DES            TPM_ALG_DES
#define TCPA_ALG_3DES           TPM_ALG_3DES
#define TCPA_ALG_SHA            TPM_ALG_SHA
#define TCPA_ALG_HMAC           TPM_ALG_HMAC
#define TCPA_ALG_AES            TPM_ALG_AES

#define TCPA_PROTECTED_ORDINAL          TPM_PROTECTED_ORDINAL
#define TCPA_UNPROTECTED_ORDINAL        TPM_UNPROTECTED_ORDINAL
#define TCPA_CONNECTION_ORDINAL         TPM_CONNECTION_ORDINAL

#define TCPA_PROTECTED_COMMAND          TPM_PROTECTED_COMMAND
#define TCPA_UNPROTECTED_COMMAND        TPM_UNPROTECTED_COMMAND
#define TCPA_CONNECTION_COMMAND         TPM_CONNECTION_COMMAND
#define TCPA_VENDOR_COMMAND             TPM_VENDOR_COMMAND

#define TCPA_MAIN               TPM_MAIN
#define TCPA_PC                 TPM_PC
#define TCPA_PDA                TPM_PDA
#define TCPA_CELL_PHONE         TPM_CELL_PHONE

#define TCPA_MS_MIGRATE                 TPM_MS_MIGRATE
#define TCPA_MS_REWRAP                  TPM_MS_REWRAP
#define TCPA_MS_MAINT                   TPM_MS_MAINT

#define TCPA_ES_NONE                    TPM_ES_NONE
#define TCPA_ES_RSAESPKCSv15            TPM_ES_RSAESPKCSv15
#define TCPA_ES_RSAESOAEP_SHA1_MGF1     TPM_ES_RSAESOAEP_SHA1_MGF1

#define TCPA_SS_NONE                    TPM_SS_NONE
#define TCPA_SS_RSASSAPKCS1v15_SHA1     TPM_SS_RSASSAPKCS1v15_SHA1
#define TCPA_SS_RSASSAPKCS1v15_DER      TPM_SS_RSASSAPKCS1v15_DER

#define TCPA_PHYSICAL_PRESENCE_LIFETIME_LOCK    TPM_PHYSICAL_PRESENCE_LIFETIME_LOCK
#define TCPA_PHYSICAL_PRESENCE_HW_ENABLE        TPM_PHYSICAL_PRESENCE_HW_ENABLE
#define TCPA_PHYSICAL_PRESENCE_CMD_ENABLE       TPM_PHYSICAL_PRESENCE_CMD_ENABLE
#define TCPA_PHYSICAL_PRESENCE_LOCK             TPM_PHYSICAL_PRESENCE_LOCK
#define TCPA_PHYSICAL_PRESENCE_PRESENT          TPM_PHYSICAL_PRESENCE_PRESENT
#define TCPA_PHYSICAL_PRESENCE_NOTPRESENT       TPM_PHYSICAL_PRESENCE_NOTPRESENT

#define TCPA_SUCCESS                    TPM_SUCCESS
#define TCPA_E_BASE                     TPM_E_BASE
#define TCPA_E_NON_FATAL                TPM_E_NON_FATAL
#define TCPA_E_AUTHFAIL                 TPM_E_AUTHFAIL
#define TCPA_E_BAD_PARAMETER            TPM_E_BAD_PARAMETER
#define TCPA_E_BADINDEX                 TPM_E_BADINDEX
#define TCPA_E_AUDITFAILURE             TPM_E_AUDITFAILURE
#define TCPA_E_CLEAR_DISABLED           TPM_E_CLEAR_DISABLED
#define TCPA_E_DEACTIVATED              TPM_E_DEACTIVATED
#define TCPA_E_DISABLED                 TPM_E_DISABLED
#define TCPA_E_DISABLED_CMD             TPM_E_DISABLED_CMD
#define TCPA_E_FAIL                     TPM_E_FAIL
#define TCPA_E_INACTIVE                 TPM_E_BAD_ORDINAL
#define TCPA_E_INSTALL_DISABLED         TPM_E_INSTALL_DISABLED
#define TCPA_E_INVALID_KEYHANDLE        TPM_E_INVALID_KEYHANDLE
#define TCPA_E_KEYNOTFOUND              TPM_E_KEYNOTFOUND
#define TCPA_E_NEED_SELFTEST            TPM_E_INAPPROPRIATE_ENC
#define TCPA_E_MIGRATEFAIL              TPM_E_MIGRATEFAIL
#define TCPA_E_NO_PCR_INFO              TPM_E_INVALID_PCR_INFO
#define TCPA_E_NOSPACE                  TPM_E_NOSPACE
#define TCPA_E_NOSRK                    TPM_E_NOSRK
#define TCPA_E_NOTSEALED_BLOB           TPM_E_NOTSEALED_BLOB
#define TCPA_E_OWNER_SET                TPM_E_OWNER_SET
#define TCPA_E_RESOURCES                TPM_E_RESOURCES
#define TCPA_E_SHORTRANDOM              TPM_E_SHORTRANDOM
#define TCPA_E_SIZE                     TPM_E_SIZE
#define TCPA_E_WRONGPCRVAL              TPM_E_WRONGPCRVAL
#define TCPA_E_BAD_PARAM_SIZE           TPM_E_BAD_PARAM_SIZE
#define TCPA_E_SHA_THREAD               TPM_E_SHA_THREAD
#define TCPA_E_SHA_ERROR                TPM_E_SHA_ERROR
#define TCPA_E_FAILEDSELFTEST           TPM_E_FAILEDSELFTEST
#define TCPA_E_AUTH2FAIL                TPM_E_AUTH2FAIL
#define TCPA_E_BADTAG                   TPM_E_BADTAG
#define TCPA_E_IOERROR                  TPM_E_IOERROR
#define TCPA_E_ENCRYPT_ERROR            TPM_E_ENCRYPT_ERROR
#define TCPA_E_DECRYPT_ERROR            TPM_E_DECRYPT_ERROR
#define TCPA_E_INVALID_AUTHHANDLE       TPM_E_INVALID_AUTHHANDLE
#define TCPA_E_NO_ENDORSEMENT           TPM_E_NO_ENDORSEMENT
#define TCPA_E_INVALID_KEYUSAGE         TPM_E_INVALID_KEYUSAGE
#define TCPA_E_WRONG_ENTITYTYPE         TPM_E_WRONG_ENTITYTYPE
#define TCPA_E_INVALID_POSTINIT         TPM_E_INVALID_POSTINIT
#define TCPA_E_INAPPROPRIATE_SIG        TPM_E_INAPPROPRIATE_SIG
#define TCPA_E_BAD_KEY_PROPERTY         TPM_E_BAD_KEY_PROPERTY
#define TCPA_E_BAD_MIGRATION            TPM_E_BAD_MIGRATION
#define TCPA_E_BAD_SCHEME               TPM_E_BAD_SCHEME
#define TCPA_E_BAD_DATASIZE             TPM_E_BAD_DATASIZE
#define TCPA_E_BAD_MODE                 TPM_E_BAD_MODE
#define TCPA_E_BAD_PRESENCE             TPM_E_BAD_PRESENCE
#define TCPA_E_BAD_VERSION              TPM_E_BAD_VERSION
#define TCPA_E_RETRY                    TPM_E_RETRY

#endif
