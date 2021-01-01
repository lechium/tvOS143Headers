/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@interface RBSProcessPlatformPredicate : RBSProcessPredicateImpl {

	int _platform;

}

@property (nonatomic,readonly) int platform;              //@synthesize platform=_platform - In the implementation block
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)matchesProcess:(id)arg1 ;
-(int)platform;
-(id)initWithPlatform:(int)arg1 ;
-(id)processPredicate;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
@end

