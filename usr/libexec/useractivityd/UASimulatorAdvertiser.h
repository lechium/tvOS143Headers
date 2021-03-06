//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UAAdvertiser.h"

@class NSMutableArray, UASimulator;

@interface UASimulatorAdvertiser : UAAdvertiser
{
    NSMutableArray *_advertisableItems;	// 8 = 0x8
    UASimulator *_simulator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001d80c
@property(readonly, retain) UASimulator *simulator; // @synthesize simulator=_simulator;
- (id)statusString;	// IMP=0x000000010001d678
- (id)pairedDevices;	// IMP=0x000000010001d53c
- (_Bool)updateItem:(id)arg1;	// IMP=0x000000010001d3a4
- (id)advertisingItems;	// IMP=0x000000010001d398
- (_Bool)advertising;	// IMP=0x000000010001d324
- (_Bool)active;	// IMP=0x000000010001d2f0
- (void)setAdvertisableItems:(id)arg1;	// IMP=0x000000010001cee0
- (id)advertisableItems;	// IMP=0x000000010001ce6c
- (id)initWithSimulator:(id)arg1;	// IMP=0x000000010001cd20

@end

