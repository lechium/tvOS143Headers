//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSNumber, NSString;

@interface NSData (FairPlay)
- (id)_fp_getNumberWithQueryOptions:(int)arg1;	// IMP=0x000000010006ed40
@property(readonly) NSNumber *fp_purchaserID;
@property(readonly) _Bool fp_isMIDBasedSINF;
@property(readonly) NSNumber *fp_familyID;
@property(readonly) NSNumber *fp_downloaderID;
- (id)lib_gzippedData;	// IMP=0x00000001001eb1a8
- (void)lib_enumerateSubdataWithOffset:(unsigned long long)arg1 length:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001eb090
@property(readonly, copy) NSString *lib_shortDigestMD5;
@property(readonly, copy) NSString *lib_digestMD5;
@end

