//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SDStatusMonitor;
@protocol SDAirDropInformationDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropInformation : NSObject
{
    _Bool _started;	// 8 = 0x8
    SDStatusMonitor *_monitor;	// 16 = 0x10
    NSMutableDictionary *_properties;	// 24 = 0x18
    id <SDAirDropInformationDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000d6c88
@property __weak id <SDAirDropInformationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;	// IMP=0x00000001000d6c48
- (void)start;	// IMP=0x00000001000d6bf8
- (void)removeObservers;	// IMP=0x00000001000d6ba8
- (void)addObservers;	// IMP=0x00000001000d6a34
- (void)somethingChanged:(id)arg1;	// IMP=0x00000001000d6a28
- (void)setInformationAndNotify;	// IMP=0x00000001000d66a0
- (void)setProperty:(void *)arg1 forKey:(id)arg2;	// IMP=0x00000001000d6540
- (_Bool)boolValue:(void *)arg1;	// IMP=0x00000001000d64f0
- (void)dealloc;	// IMP=0x00000001000d64a4
- (id)init;	// IMP=0x00000001000d6410

@end
