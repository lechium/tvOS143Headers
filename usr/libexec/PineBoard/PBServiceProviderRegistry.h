//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary;

@interface PBServiceProviderRegistry : NSObject
{
    BKSApplicationStateMonitor *_appStateMonitor;	// 8 = 0x8
    NSMutableDictionary *_clientEndpoints;	// 16 = 0x10
    NSMutableDictionary *_clientResponseBlocks;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100097214
- (void).cxx_destruct;	// IMP=0x0000000100099060
- (void)endpointForIdentifier:(id)arg1 providerType:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000985c4
- (void)clearEndpointsForIdentifier:(id)arg1;	// IMP=0x0000000100097e34
- (void)registerEndpoint:(id)arg1 forIdentifier:(id)arg2 providerType:(id)arg3;	// IMP=0x0000000100097764
- (void)dealloc;	// IMP=0x00000001000976fc
- (id)init;	// IMP=0x00000001000972e4

@end

