//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface MediaSocialStatusPollOperation : ISOperation
{
    CDUnknownBlockType _responseBlock;	// 96 = 0x60
    NSArray *_statusPollRequests;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000100188790
- (id)_requestURL;	// IMP=0x0000000100188638
- (void)main;	// IMP=0x0000000100187d04
@property(readonly, copy) NSArray *statusPollRequests;
@property(copy) CDUnknownBlockType responseBlock;
- (id)initWithStatusPollRequests:(id)arg1;	// IMP=0x0000000100187b30

@end

