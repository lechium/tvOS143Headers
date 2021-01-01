//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Stream.h"

#import "StreamReader-Protocol.h"

@class NSData, NSError, NSString;
@protocol StreamDelegate;

@interface DataStreamReader : Stream <StreamReader>
{
    NSData *_data;	// 8 = 0x8
    unsigned long long _cursor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100019c70
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100019b90
- (void)close;	// IMP=0x0000000100019b3c
@property(readonly) _Bool hasBytesAvailable;
- (id)initWithData:(id)arg1;	// IMP=0x0000000100019a70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <StreamDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSError *streamError;
@property(readonly) unsigned long long streamStatus;
@property(readonly) Class superclass;

@end

