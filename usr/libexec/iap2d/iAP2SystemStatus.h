//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface iAP2SystemStatus : NSObject
{
    unsigned long long _holdState;	// 8 = 0x8
    struct BTSessionImpl *_session;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_btEventQueue;	// 24 = 0x18
}

+ (id)GetSoftwareVersion;	// IMP=0x00000001000474cc
+ (id)GetModelName;	// IMP=0x0000000100047454
+ (id)GetSerialNumber;	// IMP=0x0000000100047438
+ (id)GetDeviceName;	// IMP=0x000000010004741c
+ (id)GetMobileGestaltKeyValue:(struct __CFString *)arg1;	// IMP=0x0000000100046f30
+ (id)sharedInstance;	// IMP=0x0000000100046eac
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *btEventQueue; // @synthesize btEventQueue=_btEventQueue;
@property(nonatomic) struct BTSessionImpl *btSession; // @synthesize btSession=_session;
@property(nonatomic) unsigned long long holdState; // @synthesize holdState=_holdState;
- (int)UpdateBTComponent:(id)arg1 withState:(int)arg2;	// IMP=0x00000001000479e4
- (void)UnplugBTDevice:(id)arg1 btAccessoryManager:(struct BTAccessoryManagerImpl *)arg2 btDevice:(struct BTDeviceImpl *)arg3 btName:(const char *)arg4;	// IMP=0x0000000100047954
- (void)PluginBTDevice:(id)arg1 btAccessoryManager:(struct BTAccessoryManagerImpl *)arg2 btDevice:(struct BTDeviceImpl *)arg3 btName:(const char *)arg4;	// IMP=0x0000000100047888
- (void)PostAudioOutputStateChange:(unsigned char)arg1;	// IMP=0x0000000100047884
- (void)NotifyOfUSBHostModeChange:(id)arg1;	// IMP=0x0000000100047880
- (void)PostSwapAccessoryNotificationActivate:(id)arg1 deactivate:(id)arg2;	// IMP=0x000000010004787c
- (void)setMode:(unsigned char)arg1 forMACAddress:(id)arg2;	// IMP=0x0000000100047794
- (unsigned char)modeForMACAddress:(id)arg1;	// IMP=0x000000010004773c
- (void)clearRegisteredComponentsForConnectionID:(unsigned int)arg1;	// IMP=0x0000000100047700
- (_Bool)isComponent:(id)arg1 registeredForConnectionID:(unsigned int)arg2;	// IMP=0x00000001000476bc
- (void)unregisterComponent:(id)arg1 forConnectionID:(unsigned int)arg2;	// IMP=0x0000000100047678
- (void)registerComponent:(id)arg1 forConnectionID:(unsigned int)arg2;	// IMP=0x0000000100047634
- (_Bool)IsAssistiveTouchEnabled;	// IMP=0x0000000100047618
- (id)GetNowPlayingAppName;	// IMP=0x000000010004759c
- (id)GetNowPlayingApp;	// IMP=0x0000000100047550
- (_Bool)IsHoldSwitchOn;	// IMP=0x0000000100047540
- (void)_changeListenerQueuePriorityStop:(id)arg1;	// IMP=0x0000000100047410
- (void)_changeListenerQueuePriorityHigh:(id)arg1;	// IMP=0x00000001000473cc
- (void)dealloc;	// IMP=0x00000001000472f8
- (id)init;	// IMP=0x0000000100046fcc

@end

