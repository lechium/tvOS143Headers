//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceSyncItemMutating-Protocol.h"

@class ADDeviceSyncItem, NSDictionary, NSString, NSUUID;

@interface _ADDeviceSyncItemMutation : NSObject <ADDeviceSyncItemMutating>
{
    ADDeviceSyncItem *_baseModel;	// 8 = 0x8
    NSUUID *_UUID;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasUUID:1;
        unsigned int hasProperties:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010025c820
- (id)generate;	// IMP=0x000000010025c724
- (void)setProperties:(id)arg1;	// IMP=0x000000010025c6ec
- (void)setUUID:(id)arg1;	// IMP=0x000000010025c6b8
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000010025c640
- (id)init;	// IMP=0x000000010025c630

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

