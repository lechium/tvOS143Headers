//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaServices/MSVTaskAssertion.h>

@interface MRDTaskAssertion : MSVTaskAssertion
{
    long long _type;	// 8 = 0x8
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x000000010008bfec
- (id)init;	// IMP=0x000000010008bf3c
- (id)initWithType:(long long)arg1 pid:(int)arg2 bundleID:(id)arg3 name:(id)arg4;	// IMP=0x000000010008be20

@end

