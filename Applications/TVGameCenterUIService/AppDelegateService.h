//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDaemonProxyDataUpdateDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

@interface AppDelegateService : NSObject <GKDaemonProxyDataUpdateDelegate, UIApplicationDelegate>
{
}

- (void)setLocalPlayer:(id)arg1;	// IMP=0x00000001000028d4
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x000000010000289c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100002894
- (id)init;	// IMP=0x0000000100002820

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

