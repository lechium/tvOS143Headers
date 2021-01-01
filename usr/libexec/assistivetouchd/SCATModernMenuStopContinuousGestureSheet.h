//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATModernMenuGesturesSheetBase.h"

@protocol SCATMenuStopContinuousGestureItemViewDelegate;

@interface SCATModernMenuStopContinuousGestureSheet : SCATModernMenuGesturesSheetBase
{
    id <SCATMenuStopContinuousGestureItemViewDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100089cc0
@property(nonatomic) __weak id <SCATMenuStopContinuousGestureItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x0000000100089bbc
- (_Bool)shouldAllowDwellSelection;	// IMP=0x0000000100089bb4
- (_Bool)shouldKeepScannerAwake;	// IMP=0x0000000100089bac
- (struct CGRect)rectToClear;	// IMP=0x0000000100089b30
- (_Bool)allowsExitAction;	// IMP=0x0000000100089b28
- (_Bool)allowsBackAction;	// IMP=0x0000000100089b20
- (id)makeMenuItemsIfNeeded;	// IMP=0x0000000100089a60

@end

