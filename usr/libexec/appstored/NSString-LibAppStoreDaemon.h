//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSNumber, NSURL;

@interface NSString (LibAppStoreDaemon)
- (id)lib_volumePath;	// IMP=0x000000010010b9ac
- (id)lib_stringSantiziedAndTruncatedToLength:(unsigned long long)arg1;	// IMP=0x000000010010b874
- (id)lib_stringByLimitingToLength:(unsigned long long)arg1 addElipsis:(_Bool)arg2;	// IMP=0x000000010010b79c
- (id)lib_stringByCopyingUTF8StringWithLength:(unsigned long long)arg1;	// IMP=0x000000010010b6d8
- (id)lib_stringByAppendingPathComponents:(id)arg1;	// IMP=0x000000010010b560
- (id)lib_digestMD5;	// IMP=0x000000010010b508
- (id)lib_accountDSIDValue;	// IMP=0x000000010010b4c8
@property(readonly) NSNumber *lib_numberValue;
@property(readonly) NSURL *tcr_url;
@property(readonly) unsigned long long tcr_unsignedLongLong;
@end

