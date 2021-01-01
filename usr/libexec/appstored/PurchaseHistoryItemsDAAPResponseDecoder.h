//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DKDAAPParserDelegate-Protocol.h"

@class ASDPurchaseHistoryApp, NSConditionLock, NSData, NSMutableArray, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface PurchaseHistoryItemsDAAPResponseDecoder : NSObject <DKDAAPParserDelegate>
{
    ASDPurchaseHistoryApp *_currentItem;	// 8 = 0x8
    _Bool _errorParsingItem;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    NSMutableArray *_currentBatchAdded;	// 32 = 0x20
    NSMutableArray *_currentBatchRemoved;	// 40 = 0x28
    NSMutableArray *_currentRequiredCapabilities;	// 48 = 0x30
    unsigned int _currentContainerCode;	// 56 = 0x38
    unsigned long long _batchSize;	// 64 = 0x40
    unsigned long long _currentBatchCount;	// 72 = 0x48
    NSConditionLock *_parsingLock;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_parsingQueue;	// 88 = 0x58
    _Bool _doneParsing;	// 96 = 0x60
    NSNumber *_isUpdate;	// 104 = 0x68
    NSNumber *_revision;	// 112 = 0x70
    NSNumber *_status;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001001451bc
@property(readonly) NSNumber *status; // @synthesize status=_status;
@property(readonly) NSNumber *revision; // @synthesize revision=_revision;
@property(readonly) NSNumber *isUpdate; // @synthesize isUpdate=_isUpdate;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x0000000100144ff0
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x00000001001445d8
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x0000000100144588
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x000000010014450c
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x0000000100144200
- (void)parser:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100144198
- (void)parserDidCancel:(id)arg1;	// IMP=0x0000000100144130
- (void)parser:(id)arg1 didFinishWithState:(long long)arg2;	// IMP=0x0000000100143fe0
- (void)parserDidStart:(id)arg1;	// IMP=0x0000000100143f7c
- (void)_incrementBatchCount;	// IMP=0x0000000100143f1c
- (void)_continueParsing;	// IMP=0x0000000100143de4
- (id)nextBatch;	// IMP=0x0000000100143bd0
- (void)parseMetadata;	// IMP=0x0000000100143b0c
- (id)initWithResponseData:(id)arg1;	// IMP=0x0000000100143a1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

