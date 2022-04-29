#ifndef _TGRSITYPES_H_
#define _TGRSITYPES_H_

#include <map>
#include <string>

#include <Rtypes.h>

enum class kFileType {
   UNKNOWN_FILETYPE,
   NSCL_EVT,
   GRETINA_MODE2,
   GRETINA_MODE3,
   MIDAS_FILE,
   LST_FILE,
	TDR_FILE,
   ROOT_DATA,
   ROOT_MACRO,
   CALIBRATED,
   GVALUE,
   PRESETWINDOW,
   DETECTOR_ENVIRONMENT,
   GUI_HIST_FILE,
   COMPILED_SHARED_LIBRARY,
   // COMPILED_FRAGMENT_HISTOGRAMS,
   // COMPILED_ANALYSIS_HISTOGRAMS,
   // COMPILED_FILTER,
   CONFIG_FILE,
   S800_INVMAP,
   CUTS_FILE,
   XML_FILE
};

#endif /* _TGRSITYPES_H_ */
