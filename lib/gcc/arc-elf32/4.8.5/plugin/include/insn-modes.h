/* Generated automatically from machmode.def and config/arc/arc-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  VOIDmode,                /* machmode.def:172 */
  BLKmode,                 /* machmode.def:176 */
  CCmode,                  /* machmode.def:204 */
  CC_ZNmode,               /* config/arc/arc-modes.def:25 */
  CC_Zmode,                /* config/arc/arc-modes.def:26 */
  CC_Cmode,                /* config/arc/arc-modes.def:27 */
  CC_FP_GTmode,            /* config/arc/arc-modes.def:28 */
  CC_FP_GEmode,            /* config/arc/arc-modes.def:29 */
  CC_FP_ORDmode,           /* config/arc/arc-modes.def:30 */
  CC_FP_UNEQmode,          /* config/arc/arc-modes.def:31 */
  CC_FPXmode,              /* config/arc/arc-modes.def:32 */
  CC_FPUmode,              /* config/arc/arc-modes.def:35 */
  CC_FPUEmode,             /* config/arc/arc-modes.def:36 */
  BImode,                  /* machmode.def:179 */
  QImode,                  /* machmode.def:184 */
  HImode,                  /* machmode.def:185 */
  SImode,                  /* machmode.def:186 */
  DImode,                  /* machmode.def:187 */
  TImode,                  /* machmode.def:188 */
  QQmode,                  /* machmode.def:207 */
  HQmode,                  /* machmode.def:208 */
  SQmode,                  /* machmode.def:209 */
  DQmode,                  /* machmode.def:210 */
  TQmode,                  /* machmode.def:211 */
  UQQmode,                 /* machmode.def:213 */
  UHQmode,                 /* machmode.def:214 */
  USQmode,                 /* machmode.def:215 */
  UDQmode,                 /* machmode.def:216 */
  UTQmode,                 /* machmode.def:217 */
  HAmode,                  /* machmode.def:219 */
  SAmode,                  /* machmode.def:220 */
  DAmode,                  /* machmode.def:221 */
  TAmode,                  /* machmode.def:222 */
  UHAmode,                 /* machmode.def:224 */
  USAmode,                 /* machmode.def:225 */
  UDAmode,                 /* machmode.def:226 */
  UTAmode,                 /* machmode.def:227 */
  SFmode,                  /* machmode.def:199 */
  DFmode,                  /* machmode.def:200 */
  SDmode,                  /* machmode.def:239 */
  DDmode,                  /* machmode.def:240 */
  TDmode,                  /* machmode.def:241 */
  CQImode,                 /* machmode.def:235 */
  CHImode,                 /* machmode.def:235 */
  CSImode,                 /* machmode.def:235 */
  CDImode,                 /* machmode.def:235 */
  CTImode,                 /* machmode.def:235 */
  SCmode,                  /* machmode.def:236 */
  DCmode,                  /* machmode.def:236 */
  V4QImode,                /* config/arc/arc-modes.def:39 */
  V2HImode,                /* config/arc/arc-modes.def:39 */
  V8QImode,                /* config/arc/arc-modes.def:40 */
  V4HImode,                /* config/arc/arc-modes.def:40 */
  V2SImode,                /* config/arc/arc-modes.def:40 */
  V16QImode,               /* config/arc/arc-modes.def:41 */
  V8HImode,                /* config/arc/arc-modes.def:41 */
  V4SImode,                /* config/arc/arc-modes.def:41 */
  V2DImode,                /* config/arc/arc-modes.def:41 */
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CC_FPUEmode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = TImode,

  MIN_MODE_PARTIAL_INT = VOIDmode,
  MAX_MODE_PARTIAL_INT = VOIDmode,

  MIN_MODE_FRACT = QQmode,
  MAX_MODE_FRACT = TQmode,

  MIN_MODE_UFRACT = UQQmode,
  MAX_MODE_UFRACT = UTQmode,

  MIN_MODE_ACCUM = HAmode,
  MAX_MODE_ACCUM = TAmode,

  MIN_MODE_UACCUM = UHAmode,
  MAX_MODE_UACCUM = UTAmode,

  MIN_MODE_FLOAT = SFmode,
  MAX_MODE_FLOAT = DFmode,

  MIN_MODE_DECIMAL_FLOAT = SDmode,
  MAX_MODE_DECIMAL_FLOAT = TDmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CTImode,

  MIN_MODE_COMPLEX_FLOAT = SCmode,
  MAX_MODE_COMPLEX_FLOAT = DCmode,

  MIN_MODE_VECTOR_INT = V4QImode,
  MAX_MODE_VECTOR_INT = V2DImode,

  MIN_MODE_VECTOR_FRACT = VOIDmode,
  MAX_MODE_VECTOR_FRACT = VOIDmode,

  MIN_MODE_VECTOR_UFRACT = VOIDmode,
  MAX_MODE_VECTOR_UFRACT = VOIDmode,

  MIN_MODE_VECTOR_ACCUM = VOIDmode,
  MAX_MODE_VECTOR_ACCUM = VOIDmode,

  MIN_MODE_VECTOR_UACCUM = VOIDmode,
  MAX_MODE_VECTOR_UACCUM = VOIDmode,

  MIN_MODE_VECTOR_FLOAT = VOIDmode,
  MAX_MODE_VECTOR_FLOAT = VOIDmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_SIZE const
#define CONST_MODE_BASE_ALIGN const
#define CONST_MODE_IBIT const
#define CONST_MODE_FBIT const

#endif /* insn-modes.h */
