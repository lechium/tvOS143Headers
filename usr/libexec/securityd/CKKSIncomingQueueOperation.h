//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSResultOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class CKKSKeychainView, CKKSOperationDependencies, NSMutableSet, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface CKKSIncomingQueueOperation : CKKSResultOperation <OctagonStateTransitionOperationProtocol>
{
    _Bool _errorOnClassAFailure;	// 8 = 0x8
    _Bool _handleMismatchedViewItems;	// 9 = 0x9
    _Bool _newOutgoingEntries;	// 10 = 0xa
    _Bool _pendingClassAEntries;	// 11 = 0xb
    _Bool _missingKey;	// 12 = 0xc
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    CKKSOperationDependencies *_deps;	// 32 = 0x20
    CKKSKeychainView *_ckks;	// 40 = 0x28
    unsigned long long _successfulItemsProcessed;	// 48 = 0x30
    unsigned long long _errorItemsProcessed;	// 56 = 0x38
    NSMutableSet *_viewsToScan;	// 64 = 0x40
}

+ (id)decryptCKKSItemToAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000676f4
- (void).cxx_destruct;	// IMP=0x00000001000659c0
@property(retain) NSMutableSet *viewsToScan; // @synthesize viewsToScan=_viewsToScan;
@property _Bool missingKey; // @synthesize missingKey=_missingKey;
@property _Bool pendingClassAEntries; // @synthesize pendingClassAEntries=_pendingClassAEntries;
@property _Bool newOutgoingEntries; // @synthesize newOutgoingEntries=_newOutgoingEntries;
@property unsigned long long errorItemsProcessed; // @synthesize errorItemsProcessed=_errorItemsProcessed;
@property unsigned long long successfulItemsProcessed; // @synthesize successfulItemsProcessed=_successfulItemsProcessed;
@property _Bool handleMismatchedViewItems; // @synthesize handleMismatchedViewItems=_handleMismatchedViewItems;
@property _Bool errorOnClassAFailure; // @synthesize errorOnClassAFailure=_errorOnClassAFailure;
@property __weak CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)_onqueueHandleIQEDelete:(id)arg1 class:(const struct SecDbClass *)arg2;	// IMP=0x0000000100064e3c
- (void)_onqueueHandleIQEChange:(id)arg1 item:(struct SecDbItem *)arg2 sortedForThisView:(_Bool)arg3;	// IMP=0x0000000100063f28
- (void)_onqueueHandleIQEChange:(id)arg1 attributes:(id)arg2 class:(const struct SecDbClass *)arg3 sortedForThisView:(_Bool)arg4;	// IMP=0x0000000100063d88
- (_Bool)fixMismatchedViewItems;	// IMP=0x0000000100063ad8
- (_Bool)loadAndProcessEntriesWithActionFilter:(id)arg1;	// IMP=0x00000001000637fc
- (void)main;	// IMP=0x0000000100062e78
- (_Bool)_onqueueUpdateIQE:(id)arg1 withState:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100062ccc
- (void)_onqueueHandleMismatchedViewItem:(id)arg1 secDbClass:(const struct SecDbClass *)arg2 attributes:(id)arg3 intendedView:(id)arg4;	// IMP=0x0000000100062610
- (_Bool)processQueueEntries:(id)arg1;	// IMP=0x0000000100061178
- (_Bool)processNewCurrentItemPointers:(id)arg1;	// IMP=0x0000000100060dc4
- (id)initWithDependencies:(id)arg1 ckks:(id)arg2 intending:(id)arg3 errorState:(id)arg4 errorOnClassAFailure:(_Bool)arg5 handleMismatchedViewItems:(_Bool)arg6;	// IMP=0x0000000100060b7c
- (id)init;	// IMP=0x0000000100060b64

@end

