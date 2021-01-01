/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSData;

@interface Signature : GPBMessage

@property (nonatomic,copy) NSData * signature; 
@property (nonatomic,copy) NSData * signingKeySpkihash; 
@property (assign,nonatomic) int algorithm; 
+(id)descriptor;
@end

