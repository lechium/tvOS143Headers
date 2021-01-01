//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSString, NSUUID, _DASActivity;
@protocol OS_dispatch_queue, _DASPluginDelegate;

@interface _DASPlugin : NSObject
{
    NSString *_extensionName;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    id <_DASPluginDelegate> _pluginDelegate;	// 24 = 0x18
    NSExtension *_extension;	// 32 = 0x20
    NSUUID *_sessionID;	// 40 = 0x28
    NSString *_pluginMapKey;	// 48 = 0x30
    _DASActivity *_currentActivity;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 72 = 0x48
}

+ (id)pluginForIdentifier:(id)arg1 ofType:(id)arg2;	// IMP=0x000000010006acb4
+ (id)existingPluginForIdentifier:(id)arg1 ofType:(id)arg2;	// IMP=0x000000010006abfc
+ (id)extensionForIdentifier:(id)arg1 ofType:(id)arg2;	// IMP=0x000000010006a6d8
- (void).cxx_destruct;	// IMP=0x000000010006c54c
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) _DASActivity *currentActivity; // @synthesize currentActivity=_currentActivity;
@property(retain) NSString *pluginMapKey; // @synthesize pluginMapKey=_pluginMapKey;
@property(retain) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(retain) NSExtension *extension; // @synthesize extension=_extension;
@property __weak id <_DASPluginDelegate> pluginDelegate; // @synthesize pluginDelegate=_pluginDelegate;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *extensionName; // @synthesize extensionName=_extensionName;
- (id)description;	// IMP=0x000000010006c3d0
@property(readonly) _Bool isInternal;
@property(readonly) NSString *extensionID;
- (id)containerID;	// IMP=0x000000010006c2e8
- (id)container;	// IMP=0x000000010006c24c
- (void)unload;	// IMP=0x000000010006bf90
- (void)extensionDidFinishWithStatus:(unsigned char)arg1;	// IMP=0x000000010006bda4
- (void)suspend;	// IMP=0x000000010006bc34
- (void)performActivity:(id)arg1;	// IMP=0x000000010006b8fc
- (void)_setupSessionIfNecessary;	// IMP=0x000000010006b740
- (id)_contextForSession;	// IMP=0x000000010006b6b4
- (void)_setupExtension;	// IMP=0x000000010006b174
- (id)initWithExtension:(id)arg1 pluginMapKey:(id)arg2;	// IMP=0x000000010006aebc

@end

