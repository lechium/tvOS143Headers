//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadDataConsumer.h"

@class NSArray, NSString;

@interface FilesystemDownloadDataConsumer : DownloadDataConsumer
{
    long long _bytesWritten;	// 8 = 0x8
    int _fd;	// 16 = 0x10
    _Bool _hasConsumedData;	// 20 = 0x14
    NSArray *_hashes;	// 24 = 0x18
    struct CC_MD5state_st _md5Context;	// 32 = 0x20
    long long _numberOfBytesToHash;	// 128 = 0x80
    NSString *_path;	// 136 = 0x88
    unsigned long long _resumptionOffset;	// 144 = 0x90
    long long _verifiedBytes;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000100115f30
- (unsigned long long)resumptionOffset;	// IMP=0x0000000100115f20
- (_Bool)hasConsumedData;	// IMP=0x0000000100115f10
- (void)_truncateToSize:(long long)arg1;	// IMP=0x0000000100115e94
- (_Bool)_openFile;	// IMP=0x0000000100115cb4
- (_Bool)_hashAndWriteData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100115a8c
- (_Bool)_checkHashForByteCount:(long long)arg1;	// IMP=0x0000000100115670
- (void)truncate;	// IMP=0x0000000100115660
- (void)suspend;	// IMP=0x0000000100115624
- (void)reset;	// IMP=0x00000001001155cc
- (_Bool)finish:(id *)arg1;	// IMP=0x00000001001154c0
- (unsigned long long)diskUsage;	// IMP=0x00000001001154b0
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100115308
- (void)dealloc;	// IMP=0x00000001001152b0
- (id)initWithPath:(id)arg1 MD5Hashes:(id)arg2 numberOfBytesToHash:(long long)arg3;	// IMP=0x0000000100115198

@end

