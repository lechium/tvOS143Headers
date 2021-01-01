//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVHKAsynchronousWorkToken, TVHKMediaEntityIdentifier, TVHKMediaLibrary, TVHKStateMachine;

@interface TVHScreenSaverProviderMediaEntitiesRequest : NSObject
{
    TVHKMediaLibrary *_mediaLibrary;	// 8 = 0x8
    unsigned long long _mediaCategoryType;	// 16 = 0x10
    TVHKMediaEntityIdentifier *_mediaEntityCollectionIdentifier;	// 24 = 0x18
    TVHKStateMachine *_stateMachine;	// 32 = 0x20
    TVHKAsynchronousWorkToken *_fetchWorkToken;	// 40 = 0x28
    CDUnknownBlockType _completionBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000222d4
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) TVHKAsynchronousWorkToken *fetchWorkToken; // @synthesize fetchWorkToken=_fetchWorkToken;
@property(retain, nonatomic) TVHKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) TVHKMediaEntityIdentifier *mediaEntityCollectionIdentifier; // @synthesize mediaEntityCollectionIdentifier=_mediaEntityCollectionIdentifier;
@property(readonly, nonatomic) unsigned long long mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_completeWithFetchResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000100022060
- (void)_startFetchingMediaEntities;	// IMP=0x000000010002198c
- (void)_stopObservingMediaLibrary:(id)arg1;	// IMP=0x0000000100021908
- (void)_startObservingMediaLibrary:(id)arg1;	// IMP=0x000000010002187c
- (id)_stateMachineName;	// IMP=0x00000001000217e0
- (void)_registerStateMachineHandlers;	// IMP=0x0000000100021164
- (void)_setupStateMachine;	// IMP=0x00000001000210b4
- (void)_handleMediaLibraryConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100020f48
- (void)fetchMediaEntitiesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100020d48
- (void)dealloc;	// IMP=0x0000000100020cf8
- (id)initWithMediaLibrary:(id)arg1 mediaCategoryType:(unsigned long long)arg2 mediaEntityCollectionIdentifier:(id)arg3;	// IMP=0x0000000100020bd4

@end

