/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct _compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > {
	vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > __value_;
} compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >;

typedef struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > {
	vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > __begin_;
	vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > __end_;
	compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > __end_cap_;
} vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >;

typedef struct {
	unsigned uppercase : 1;
	unsigned autoshifted : 1;
	unsigned popupVariant : 1;
	unsigned multitap : 1;
	unsigned flick : 1;
	unsigned gesture : 1;
	unsigned synthesizedByAcceptingCandidate : 1;
	unsigned doubleSpace : 1;
	unsigned rapidDelete : 1;
	unsigned shiftDown : 1;
} SCD_Struct_TI4;

typedef union {
	long long integerValue;
	SCD_Struct_TI4 fields;
} SCD_Union_TI5;

typedef struct {
	unsigned canHandleKeyHitTest : 1;
	unsigned ignoresDeadKeys : 1;
	unsigned shouldExtendPriorWord : 1;
	unsigned suppliesCompletions : 1;
	unsigned supportsNumberKeySelection : 1;
	unsigned supportsSetPhraseBoundary : 1;
	unsigned suppressCompletionsForFieldEditor : 1;
	unsigned usesAutoDeleteWord : 1;
	unsigned usesCandidateSelection : 1;
	unsigned commitsAcceptedCandidate : 1;
	unsigned newInputAcceptsUserSelectedCandidate : 1;
	unsigned nextInputWouldStartSentence : 1;
	unsigned inputStringIsExemptFromChecker : 1;
	unsigned suppressPlaceholderCandidate : 1;
	unsigned usesAutocorrectionLists : 1;
	unsigned autoquoteType : 2;
	unsigned usesContinuousPath : 1;
	unsigned usesContinuousPathProgressiveCandidates : 1;
	unsigned usesPunctuationKeysForRowNavigation : 1;
	unsigned insertsSpaceAfterPredictiveInput : 1;
	unsigned shouldFixupIncompleteRomaji : 1;
	unsigned usesLiveConversion : 1;
	unsigned delayedCandidateList : 1;
} SCD_Struct_TI6;

typedef union {
	long long integerValue;
	SCD_Struct_TI6 fields;
} SCD_Union_TI7;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned userSelectedCurrentCandidate : 1;
	unsigned shouldSkipCandidateSelection : 1;
	unsigned suppressingCandidateSelection : 1;
	unsigned needsCandidateMetadata : 1;
	unsigned keyboardEventsLagging : 1;
	unsigned hardwareKeyboardMode : 1;
	unsigned splitKeyboardMode : 1;
	unsigned floatingKeyboardMode : 1;
	unsigned wordLearningEnabled : 1;
	unsigned autocorrectionEnabled : 1;
	unsigned shortcutConversionEnabled : 1;
	unsigned candidateSelectionPredictionEnabled : 1;
	unsigned autocapitalizationEnabled : 1;
	unsigned canSendCurrentLocation : 1;
	unsigned isScreenLocked : 1;
	unsigned longPredictionListEnabled : 1;
	unsigned needAutofill : 1;
	unsigned needOneTimeCodeAutofill : 1;
	unsigned landscapeOrientation : 1;
	unsigned omitEmojiCandidates : 1;
	unsigned emojiSearchMode : 1;
	unsigned emojiPopoverMode : 1;
} SCD_Struct_TI11;

typedef union {
	long long integerValue;
	SCD_Struct_TI11 fields;
} SCD_Union_TI12;

typedef struct {
	unsigned displayed : 1;
	unsigned autoDisplayMode : 1;
} SCD_Struct_TI13;

typedef union {
	long long integerValue;
	SCD_Struct_TI13 fields;
} SCD_Union_TI14;

typedef struct {
	unsigned continuousPathState : 4;
} SCD_Struct_TI15;

typedef union {
	long long integerValue;
	SCD_Struct_TI15 fields;
} SCD_Union_TI16;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_TI17;

typedef struct {
	unsigned short buffer[64];
	__CFString theString;
	unsigned short directUniCharBuffer;
	char* directCStringBuffer;
	SCD_Struct_TI17 rangeToBuffer;
	long long bufferedRangeStart;
	long long bufferedRangeEnd;
} SCD_Struct_TI18;

typedef struct CGColor* CGColorRef;

typedef struct CGImage* CGImageRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct {
	unsigned autocapitalizationType : 2;
	unsigned autocorrectionType : 2;
	unsigned spellCheckingType : 2;
	unsigned keyboardType : 4;
	unsigned keyboardAppearance : 2;
	unsigned returnKeyType : 4;
	unsigned textScriptType : 4;
	unsigned enablesReturnKeyAutomatically : 1;
	unsigned secureTextEntry : 1;
	unsigned smartInsertDeleteEnabled : 1;
	unsigned smartQuotesEnabled : 1;
	unsigned smartDashesEnabled : 1;
	unsigned disablePrediction : 1;
	unsigned smartInsertDeleteType : 2;
	unsigned smartQuotesType : 2;
	unsigned smartDashesType : 2;
} SCD_Struct_TI22;

typedef union {
	long long integerValue;
	SCD_Struct_TI22 fields;
} SCD_Union_TI23;

