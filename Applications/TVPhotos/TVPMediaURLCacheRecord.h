//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSURL;

@interface TVPMediaURLCacheRecord : NSObject
{
    NSURL *_url;	// 8 = 0x8
    NSDate *_expiration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001f138
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;

@end

