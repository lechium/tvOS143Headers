//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADRapportProximityObservationMutating-Protocol.h"

@class ADRapportProximityObservation, NSDate, NSSet, NSString;

@interface _ADRapportProximityObservationMutation : NSObject <ADRapportProximityObservationMutating>
{
    ADRapportProximityObservation *_baseModel;	// 8 = 0x8
    NSSet *_deviceIDPair;	// 16 = 0x10
    int _proximity;	// 24 = 0x18
    NSDate *_observationDate;	// 32 = 0x20
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDeviceIDPair:1;
        unsigned int hasProximity:1;
        unsigned int hasObservationDate:1;
    } _mutationFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100292a34
- (id)generate;	// IMP=0x0000000100292908
- (void)setObservationDate:(id)arg1;	// IMP=0x00000001002928d0
- (void)setProximity:(int)arg1;	// IMP=0x00000001002928b8
- (void)setDeviceIDPair:(id)arg1;	// IMP=0x0000000100292884
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000010029280c
- (id)init;	// IMP=0x00000001002927fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

