//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATModernMenuGesturesSheetBase.h"

@class NSMutableArray;
@protocol SCATMenuCustomGestureItemsViewDelegate;

@interface SCATModernMenuCustomGesturesSheet : SCATModernMenuGesturesSheetBase
{
    NSMutableArray *_gestures;	// 16 = 0x10
    int _type;	// 24 = 0x18
    id <SCATMenuCustomGestureItemsViewDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000904cc
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id <SCATMenuCustomGestureItemsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_loadGestures;	// IMP=0x0000000100090278
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x000000010009007c
- (_Bool)shouldUpdateMenuItem:(id)arg1;	// IMP=0x000000010008faac
- (id)backTitle;	// IMP=0x000000010008faa0
- (id)makeMenuItemsIfNeeded;	// IMP=0x000000010008f65c
- (void)viewControllerViewWillAppear:(_Bool)arg1;	// IMP=0x000000010008f5cc
- (id)initWithType:(int)arg1 menu:(id)arg2;	// IMP=0x000000010008f578

@end
