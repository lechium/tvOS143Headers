//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DKDAAPParserDelegate-Protocol.h"

@class ASDMutableIAPInfo, NSArray, NSMutableArray, NSNumber, NSString;

@interface IAPInfoDAAPResponseDecoder : NSObject <DKDAAPParserDelegate>
{
    unsigned int _status;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    NSMutableArray *_deletedItems;	// 24 = 0x18
    NSMutableArray *_currentItemsArray;	// 32 = 0x20
    ASDMutableIAPInfo *_currentItem;	// 40 = 0x28
    _Bool _errorParsingItem;	// 48 = 0x30
    _Bool _success;	// 49 = 0x31
    _Bool _update;	// 50 = 0x32
    NSNumber *_serverRevision;	// 56 = 0x38
    NSArray *_addedIAPs;	// 64 = 0x40
    NSArray *_removedIAPs;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001002f3a64
@property(readonly) NSArray *removedIAPs; // @synthesize removedIAPs=_removedIAPs;
@property(readonly) NSArray *addedIAPs; // @synthesize addedIAPs=_addedIAPs;
@property(readonly) NSNumber *serverRevision; // @synthesize serverRevision=_serverRevision;
@property(readonly, getter=isUpdate) _Bool update; // @synthesize update=_update;
@property(readonly, getter=isSuccess) _Bool success; // @synthesize success=_success;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x00000001002f38a4
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x00000001002f34bc
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x00000001002f3418
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x00000001002f33e0
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x00000001002f3298
- (void)parser:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001002f3248
- (void)parserDidCancel:(id)arg1;	// IMP=0x00000001002f31f8
- (void)parser:(id)arg1 didFinishWithState:(long long)arg2;	// IMP=0x00000001002f2f74
- (void)parserDidStart:(id)arg1;	// IMP=0x00000001002f2f10
- (void)_parseResponseData:(id)arg1;	// IMP=0x00000001002f2db0
- (id)initWithResponseData:(id)arg1;	// IMP=0x00000001002f2cec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

