//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class JobAgentSupervisor, NSMutableSet;

@interface LaunchServicesObserver : NSObject
{
    JobAgentSupervisor *_supervisor;	// 8 = 0x8
    NSMutableSet *_systemAppRequests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001002c1c7c
- (void)_parseRegistrationNotification:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001002c1b78
- (void)_handleUninstalledEventNotification:(id)arg1;	// IMP=0x00000001002c1a20
- (void)_handleBetaAppCrashedNotification:(id)arg1;	// IMP=0x00000001002c1a1c
- (void)_handleAppleIDDidChangeNotification:(id)arg1;	// IMP=0x00000001002c1894
- (void)_handleInstalledEventNotification:(id)arg1;	// IMP=0x00000001002c1178
- (id)initWithJobSupervisor:(id)arg1;	// IMP=0x00000001002c1044

@end
