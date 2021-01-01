/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSData;

@interface VRFPublicKey : GPBMessage

@property (assign) BOOL needsRefresh; 
@property (nonatomic,copy) NSData * vrfKey; 
@property (assign,nonatomic) int type; 
+(id)descriptor;
-(BOOL)needsRefresh;
-(void)setNeedsRefresh:(BOOL)arg1 ;
@end

