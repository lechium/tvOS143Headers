//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDNodeBrowserDelegate-Protocol.h"

@class NSDictionary, NSNumber, NSString, SDXPCHelperConnection;
@protocol OS_os_transaction, OS_xpc_object, SDNetworkBrowserDelegate;

__attribute__((visibility("hidden")))
@interface SDNetworkBrowser : NSObject <SDNodeBrowserDelegate>
{
    struct __SFNode *_rootNode;	// 8 = 0x8
    long long _mode;	// 16 = 0x10
    struct __CFDictionary *_nodeBrowsers;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    NSObject<OS_os_transaction> *_transaction;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    SDXPCHelperConnection *_helperConnection;	// 56 = 0x38
    NSString *_kind;	// 64 = 0x40
    NSString *_objectKey;	// 72 = 0x48
    NSObject<OS_xpc_object> *_boostMessage;	// 80 = 0x50
    id <SDNetworkBrowserDelegate> _delegate;	// 88 = 0x58
    NSObject<OS_xpc_object> *_connection;	// 96 = 0x60
    NSNumber *_isEntitled;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000010005d52c
@property(retain) NSNumber *isEntitled; // @synthesize isEntitled=_isEntitled;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property __weak id <SDNetworkBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_xpc_object> *boostMessage; // @synthesize boostMessage=_boostMessage;
@property(copy) NSString *objectKey; // @synthesize objectKey=_objectKey;
@property(readonly, copy) NSString *kind; // @synthesize kind=_kind;
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)invalidate;	// IMP=0x000000010005d320
- (int)closeNode:(struct __SFNode *)arg1;	// IMP=0x000000010005d298
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x000000010005d230
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x000000010005d1c8
@property(copy) NSDictionary *options;
@property long long mode;
- (id)sidebarChildren;	// IMP=0x000000010005d094
- (id)childrenForNode:(struct __SFNode *)arg1;	// IMP=0x000000010005d024
- (struct __SFNode *)copyRootNode;	// IMP=0x000000010005d014
- (int)openNode:(struct __SFNode *)arg1 forProtocol:(id)arg2 flags:(unsigned long long)arg3;	// IMP=0x000000010005ce94
- (void)nodeBrowser:(id)arg1 nodesChangedForParent:(struct __SFNode *)arg2 protocol:(id)arg3 error:(int)arg4;	// IMP=0x000000010005ce1c
- (void)dealloc;	// IMP=0x000000010005cdb8
- (id)initWithKind:(id)arg1 rootNode:(struct __SFNode *)arg2;	// IMP=0x000000010005ccd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

