//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface SRError : NSError
{
}

+ (id)errorWithCode:(long long)arg1;	// IMP=0x0000000100089a14
+ (id)errorWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x00000001000899b4
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000100089954
- (id)initWithCode:(long long)arg1;	// IMP=0x0000000100089b24
- (id)initWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x0000000100089a40
- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000100089a24

@end

