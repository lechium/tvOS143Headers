//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVMediaSocialPostAttachment.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MediaSocialPostAttachment : SSVMediaSocialPostAttachment <NSCopying>
{
    NSString *_assetToken;	// 8 = 0x8
    NSString *_assetTokenType;	// 16 = 0x10
    double _uploadTime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100187864
@property(nonatomic) double uploadTime; // @synthesize uploadTime=_uploadTime;
@property(copy, nonatomic) NSString *assetTokenType; // @synthesize assetTokenType=_assetTokenType;
@property(copy, nonatomic) NSString *assetToken; // @synthesize assetToken=_assetToken;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100187774

@end

