//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVNPBaseRoutingDestinationCollectionViewCell.h"

@class TVNPRoutingDestination;

@interface TVNPRoutingDestinationCollectionViewCell : TVNPBaseRoutingDestinationCollectionViewCell
{
    TVNPRoutingDestination *_destination;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100027edc
@property(retain, nonatomic) TVNPRoutingDestination *destination; // @synthesize destination=_destination;
- (void)_updateNowPlayingInfo;	// IMP=0x0000000100027c0c
- (void)_updateMusicBarState;	// IMP=0x0000000100027bb8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100027a7c
- (void)dealloc;	// IMP=0x00000001000277dc

@end
