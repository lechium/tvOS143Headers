//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadDataConsumer.h"

#import "SZExtractorDelegate-Protocol.h"

@class NSDictionary, NSString, SZExtractor;

@interface StreamingZipDownloadDataConsumer : DownloadDataConsumer <SZExtractorDelegate>
{
    SZExtractor *_extractor;	// 8 = 0x8
    _Bool _hasConsumedData;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    double _percentComplete;	// 40 = 0x28
    unsigned long long _resumptionOffset;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100091b8c
- (unsigned long long)resumptionOffset;	// IMP=0x0000000100091b7c
- (double)percentComplete;	// IMP=0x0000000100091b6c
- (_Bool)hasConsumedData;	// IMP=0x0000000100091b5c
- (id)_stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000100091ae8
- (id)_stringWithFileSystemRepresentation:(const char *)arg1;	// IMP=0x0000000100091aac
- (unsigned long long)_diskUsageForPath:(id)arg1;	// IMP=0x0000000100090b20
- (void)_initializeExtractorWithPath:(id)arg1 options:(id)arg2;	// IMP=0x00000001000909e0
- (void)setExtractionProgress:(double)arg1;	// IMP=0x00000001000909d0
- (void)truncate;	// IMP=0x0000000100090930
- (void)suspend;	// IMP=0x000000010009087c
- (void)reset;	// IMP=0x000000010009080c
- (_Bool)finish:(id *)arg1;	// IMP=0x00000001000905f8
- (unsigned long long)diskUsage;	// IMP=0x00000001000905a8
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010009037c
- (id)initWithPath:(id)arg1 options:(id)arg2;	// IMP=0x0000000100090258

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
