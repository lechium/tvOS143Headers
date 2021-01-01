//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATModernMenuGesturesSheetBase.h"

@protocol SCATMenuGestureConfirmationItemsViewDelegate;

@interface SCATModernMenuConfirmGestureSheet : SCATModernMenuGesturesSheetBase
{
    id <SCATMenuGestureConfirmationItemsViewDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010008f520
@property(nonatomic) __weak id <SCATMenuGestureConfirmationItemsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x000000010008f398
- (_Bool)shouldKeepScannerAwake;	// IMP=0x000000010008f390
- (struct CGRect)rectToClear;	// IMP=0x000000010008f37c
- (_Bool)allowsExitAction;	// IMP=0x000000010008f374
- (_Bool)allowsBackAction;	// IMP=0x000000010008f36c
- (id)makeMenuItemsIfNeeded;	// IMP=0x000000010008f194

@end
