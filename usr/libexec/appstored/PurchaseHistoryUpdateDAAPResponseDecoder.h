//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DKDAAPParserDelegate-Protocol.h"

@class NSData, NSNumber, NSString;

@interface PurchaseHistoryUpdateDAAPResponseDecoder : NSObject <DKDAAPParserDelegate>
{
    NSData *_data;	// 8 = 0x8
    _Bool _hasParsedData;	// 16 = 0x10
    NSNumber *_revision;	// 24 = 0x18
    NSNumber *_status;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001cf664
@property(readonly) NSNumber *status; // @synthesize status=_status;
@property(readonly) NSNumber *revision; // @synthesize revision=_revision;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x00000001001cf648
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x00000001001cf5b0
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x00000001001cf5ac
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x00000001001cf598
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x00000001001cf560
- (void)parser:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001001cf42c
- (void)parserDidCancel:(id)arg1;	// IMP=0x00000001001cf320
- (void)parser:(id)arg1 didFinishWithState:(long long)arg2;	// IMP=0x00000001001cf314
- (void)parserDidStart:(id)arg1;	// IMP=0x00000001001cf2dc
- (void)parseMetadata;	// IMP=0x00000001001cf268
- (id)initWithResponseData:(id)arg1;	// IMP=0x00000001001cf1f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

