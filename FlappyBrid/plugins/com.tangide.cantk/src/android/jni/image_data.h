const char* imgData="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";