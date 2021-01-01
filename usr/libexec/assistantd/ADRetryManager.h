//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SABaseCommand, SARestartRequest;
@protocol SAServerBoundCommand;

@interface ADRetryManager : NSObject
{
    int _retryCount;	// 8 = 0x8
    SARestartRequest *_restartRequest;	// 16 = 0x10
    NSMutableArray *_requestObjects;	// 24 = 0x18
    _Bool _needsToRetryNakedObjects;	// 32 = 0x20
    NSMutableArray *_nakedObjects;	// 40 = 0x28
    SABaseCommand<SAServerBoundCommand> *_originalRequest;	// 48 = 0x30
    NSString *_latestMappedRequestId;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100261a84
@property(copy, nonatomic) NSString *latestMappedRequestId; // @synthesize latestMappedRequestId=_latestMappedRequestId;
- (void)clearNakedObjects;	// IMP=0x0000000100261a68
- (id)nakedObjectsToRetry;	// IMP=0x0000000100261a50
- (void)setNeedsToRetryNakedObjects;	// IMP=0x0000000100261a44
- (id)retryRequestId;	// IMP=0x00000001002619bc
- (id)originalRequestId;	// IMP=0x00000001002619ac
- (_Bool)commandRefsRestartCommand:(id)arg1;	// IMP=0x000000010026190c
- (id)objectsToRetry;	// IMP=0x00000001002615b8
- (void)_objectsToRemapFromRefId:(id)arg1 toRefId:(id)arg2 retryFullRequest:(_Bool)arg3 commandsToRetry:(id)arg4;	// IMP=0x00000001002612fc
- (_Bool)_canRestartRequest;	// IMP=0x00000001002612bc
- (void)setLastReceivedCommand:(id)arg1;	// IMP=0x00000001002611e4
- (void)endRetryableRequestForCommandAceId:(id)arg1 refId:(id)arg2;	// IMP=0x0000000100261050
- (void)endRetryableRequestForCommand:(id)arg1;	// IMP=0x0000000100260f48
- (_Bool)shouldRetryOnConnectionFailure;	// IMP=0x0000000100260f38
- (void)appendSessionObjectToRequest:(id)arg1;	// IMP=0x0000000100260ebc
- (void)beginRetryableRequest:(id)arg1;	// IMP=0x0000000100260c58
- (_Bool)_commandRefsOrIsCurrentRequest:(id)arg1;	// IMP=0x0000000100260b74
- (void)_clearRequestCommands;	// IMP=0x0000000100260b40

@end

