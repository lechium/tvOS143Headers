//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface SYDTCCHelper : NSObject
{
    int _notifyToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSSet *_cachedDisabledStoreIdentifiers;	// 24 = 0x18
}

+ (id)sharedHelper;	// IMP=0x000000010003cdfc
- (void).cxx_destruct;	// IMP=0x000000010003d810
@property(retain, nonatomic) NSSet *cachedDisabledStoreIdentifiers; // @synthesize cachedDisabledStoreIdentifiers=_cachedDisabledStoreIdentifiers;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)stopListeningToTCCAccessChangedNotifications;	// IMP=0x000000010003d75c
- (void)startListeningToTCCAccessChangedNotifications;	// IMP=0x000000010003d594
- (id)findDisabledStoreIdentifiers;	// IMP=0x000000010003d1cc
- (_Bool)isUbiquityDisabledForStoreIdentifier:(id)arg1;	// IMP=0x000000010003cf54
- (void)dealloc;	// IMP=0x000000010003cf08
- (id)init;	// IMP=0x000000010003ce68

@end
