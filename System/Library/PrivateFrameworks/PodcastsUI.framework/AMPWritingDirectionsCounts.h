/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AMPWritingDirectionsCounts : NSObject {

	 natural;
	 leftToRight;
	 rightToLeft;
	 total;
	 significantValues;
	 hasStronglyTypedCounts;
	 isRTLEnough;
	 isRTLMinimal;

}

@property (readonly,nonatomic) unsigned long long natural; 
@property (readonly,nonatomic) unsigned long long leftToRight; 
@property (readonly,nonatomic) unsigned long long rightToLeft; 
@property (readonly,nonatomic) unsigned long long total; 
@property (readonly,nonatomic) unsigned long long significantValues; 
@property (readonly,nonatomic) BOOL hasStronglyTypedCounts; 
@property (readonly,nonatomic) BOOL isRTLEnough; 
@property (readonly,nonatomic) BOOL isRTLMinimal; 
@property (readonly,nonatomic) NSString * description; 
+(id)zero;
+(id)add:(id)arg1 to:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(unsigned long long)total;
-(unsigned long long)natural;
-(unsigned long long)leftToRight;
-(unsigned long long)rightToLeft;
-(unsigned long long)significantValues;
-(BOOL)hasStronglyTypedCounts;
-(BOOL)isRTLEnough;
-(BOOL)isRTLMinimal;
-(id)initWithNatural:(unsigned long long)arg1 leftToRight:(unsigned long long)arg2 rightToLeft:(unsigned long long)arg3 ;
@end

