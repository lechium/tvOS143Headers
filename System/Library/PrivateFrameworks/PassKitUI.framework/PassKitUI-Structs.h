/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	BOOL field1;
	BOOL field2;
} SCD_Struct_PK1;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_PK2;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	BOOL foreground;
	BOOL foregroundActive;
} SCD_Struct_PK5;

typedef struct {
	double field1;
	double field2;
	CGSize field3;
	double field4;
	double field5;
	BOOL field6;
} SCD_Struct_PK6;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	CGSize field1;
	CGSize field2;
} SCD_Struct_PK11;

typedef struct CGColor* CGColorRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __CTLine* CTLineRef;

typedef struct {
	double mass;
	double stiffness;
	double damping;
	double beta;
	double omega0;
	double scratch;
	BOOL dirty;
} SCD_Struct_PK15;

typedef struct {
	double target;
	double position;
	double velocity;
	double positionThreshold;
	double velocityThreshold;
	BOOL running;
} SCD_Struct_PK16;

typedef struct {
	unsigned long long numberOfGroups;
	unsigned long long separatorIndex;
	double separationPadding;
	long long pilingMode;
	double groupCellHeight;
	unsigned long long externalToTableTransitionModalGroupIndex;
	unsigned disableTableModalPresentation : 1;
	unsigned hasPaymentPasses : 1;
	unsigned hasPasses : 1;
	unsigned hasPaymentHeader : 1;
	unsigned hasPassHeader : 1;
	unsigned hasPaymentHeaderView : 1;
	unsigned hasPassHeaderView : 1;
	unsigned hasFooter : 1;
	unsigned isDeleting : 1;
	unsigned isCompactModalPresentation : 1;
	unsigned isContinuingModalPresentation : 1;
	unsigned forceSubheaderUpdate : 1;
	unsigned forceFooterUpdate : 1;
	unsigned preventFooterLayout : 1;
	unsigned mutatingForcePileOffscreen : 1;
	unsigned transitioningFromExternalToTable : 1;
	unsigned transitioningFromExternalToModal : 1;
} SCD_Struct_PK17;

typedef struct {
	CGRect field1;
	CGRect field2;
	double field3;
} SCD_Struct_PK18;

typedef struct {
	unsigned hasPaymentPassWelcomeCard : 1;
	unsigned hasBarcodePassWelcomeCard : 1;
	unsigned barcodePassWelcomeCardIsDismissable : 1;
	unsigned hasDiscoveryCards : 1;
} SCD_Struct_PK19;

typedef struct {
	CLLocationCoordinate2D field1;
	CGSize field2;
} SCD_Struct_PK20;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
} SCD_Struct_PK21;

typedef struct {
	unsigned showingPageControl : 1;
	unsigned scrollingEnabled : 1;
	unsigned indeterminateState : 1;
	unsigned fanningEnabled : 1;
	unsigned overridePriorContentOffset : 1;
	unsigned delegateOverridesFrontmostContentWhileStacked : 1;
	unsigned delegateOverridesFrontmostContentWhilePiled : 1;
	unsigned delegateOverridesAllowPanning : 1;
	CGPoint priorContentOffset;
	CGPoint instantaneousContentOffsetDelta;
	unsigned long long numberOfPasses;
	unsigned long long selectedIndex;
	CGRect bounds;
} SCD_Struct_PK22;

typedef struct {
	BOOL field1;
	BOOL field2;
	unsigned long long field3;
} SCD_Struct_PK23;

typedef struct {
	CGRect frame;
	BOOL widthConstrained;
} SCD_Struct_PK24;

typedef struct {
	CGSize boundingSize;
	SCD_Struct_PK24 textMetrics[4];
} SCD_Struct_PK25;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	BOOL field7;
	double field8;
	double field9;
	BOOL field10;
	double field11;
	double field12;
} SCD_Struct_PK26;

typedef struct CGImage* CGImageRef;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct {
	CGSize preferredContentSize;
	double minimumNavigationHeight;
	BOOL isRoot;
} SCD_Struct_PK29;

typedef struct {
	CGSize field1;
	double field2;
	BOOL field3;
} SCD_Struct_PK30;

typedef struct {
	unsigned long long numberOfSections;
	unsigned long long indexToSection;
	unsigned long long sectionToIndex;
} SCD_Struct_PK31;

typedef struct {
	BOOL field1;
	long long field2;
} SCD_Struct_PK32;

typedef struct {
	CGSize field1;
	CGSize field2;
	double field3;
} SCD_Struct_PK33;

typedef struct {
	double cornerRadius;
	long long shape;
	long long style;
	long long highlightEffect;
	long long disabledEffect;
} SCD_Struct_PK34;

typedef struct {
	double barcodeTopPadding;
	double disclaimerToBarcodePadding;
	double disclaimerSidePadding;
	double bankToDisclaimerPadding;
	double altTextInset;
} SCD_Struct_PK35;

typedef struct {
	double dashLength;
	double dashWidth;
	double hyphenOffset;
} SCD_Struct_PK36;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
} SCD_Struct_PK37;

